#include <sstream>
#include <iostream>
#include <iomanip>
using namespace std;
#include <string>


template <class T>
class LinkedList
{
    template <typename V>
    friend ostream& operator<<(ostream&, const LinkedList<V>&);

    template<class K>
    class Node
    {
      friend class LinkedList;
      private:
        K* data;
        Node<K>* next;
    };

  public:
    LinkedList();
    ~LinkedList();
    int getSize() const;
    LinkedList<T>& operator+=(T*);
    LinkedList<T>& operator-=(T*);
    T* operator[](int);

  private:
    Node<T>* head;

  };

  template <class T>
  LinkedList<T>::LinkedList():head(0){}

  template <class T>
  LinkedList<T>::~LinkedList()
  {
    Node<T> *currNode, *nextNode;

    currNode = head;

    while (currNode != 0) {
      nextNode = currNode->next;
      delete currNode->data;
      delete currNode;
      currNode = nextNode;
    }

  }

  template <class T>
  int LinkedList<T>::getSize() const
  {
    Node<T> *currNode = head;
    int size = 0;

    while (currNode != 0) {
      currNode = currNode->next;
      size++;
    }

    return size;
  }

  template <class T>
  LinkedList<T>& LinkedList<T>::operator+=(T *data)
  {
    Node<T> *currNode, *prevNode;
    Node<T>* newNode = new Node<T>;
    newNode->data = data;
    newNode->next = 0;

    currNode = head;
    prevNode = 0;

    while (currNode != 0) {
      if (*(newNode->data) < *(currNode->data))
        break;
      prevNode = currNode;
      currNode = currNode->next;
    }

    if (prevNode == 0) {
      head = newNode;
    }
    else {
      prevNode->next = newNode;
    }

    newNode->next = currNode;

    return *this;
  }

  template <class T>
  LinkedList<T>& LinkedList<T>::operator-=(T *data)
  {
    Node<T> *currNode, *prevNode;

    currNode = head;
    prevNode = 0;

    while (currNode != 0) {
      if (currNode->data == data)
        break;
      prevNode = currNode;
      currNode = currNode->next;
    }

    if (currNode == 0)
      return *this;

    if (prevNode == 0) {
      head = currNode->next;
    }
    else {
      prevNode->next = currNode->next;
    }

    delete currNode;

    return *this;
  }

  template <class T>
  T* LinkedList<T>::operator[](int i)
  {
    if(i < 0 || i > (getSize()-1)) {
        return 0;
    } else {

        Node<T> *currNode = head;

        for (int j = 0; j < i; j++) {
            currNode = currNode->next;
        }

        return currNode->data;
    }
  }

  template <class T>
  ostream& operator<<(ostream& output, LinkedList<T>& x)
  {
    for (int i = 0; i < x.getSize(); i++)  {
      output << (*(x[i]));
    }

    return output;
  }
