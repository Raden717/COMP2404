#include <iostream>
using namespace std;

#include "List.h"

List::List() : head(NULL) { }

List::~List()
{
  Node* currNode;
  Node* nextNode;

  currNode = head;

  while (currNode != NULL) {
    nextNode = currNode->next;
    delete currNode;
    currNode = nextNode;
  }
}

void List::add(Book* book)
{
  Node* tmpNode;
  Node* currNode;
  Node* prevNode;

  tmpNode = new Node;
  tmpNode->data = book;
  tmpNode->next = NULL;

  currNode = head;
  prevNode = NULL;

  bool checkDupe = false;

  while (currNode != NULL) {
    if (book->getBookID() == currNode->data->getBookID()){
      checkDupe = true;
    }
    if (book->getAuthor() < currNode->data->getAuthor())
      break;

    prevNode = currNode;
    currNode = currNode->next;
  }

  if(checkDupe == true){
    delete tmpNode;
    return;
  }

  if (prevNode == NULL)
    head = tmpNode;
  else
    prevNode->next = tmpNode;

  tmpNode->next  = currNode;

}

void List::del(const int bookID, Book** books)
{
  Node* currNode;
  Node* prevNode;

  currNode = head;
  prevNode = NULL;

  while (currNode != NULL) {
    if (currNode->data->getBookID() == bookID)
      break;

    prevNode = currNode;
    currNode = currNode->next;
  }

// when do we get here?  2 cases:  we found the data, or we didn't

  if (currNode == NULL) {
    *books = NULL;
    return;
  }

  if (prevNode == NULL)
    head = currNode->next;
  else
    prevNode->next = currNode->next;

  *books = currNode->data;
  delete currNode;

}

Book* List::find(int id){
  Node* currNode;
  Node* nextNode;

  currNode = head;

  while (currNode != NULL) {
    nextNode = currNode->next;
    if(currNode->data->getBookID() == id){
      return currNode->data;
    }
    currNode = nextNode;
  }

  return NULL;
}

void List::cleanup(){
  Node* currNode;
  Node* nextNode;

  currNode = head;

  while (currNode != NULL) {
    nextNode = currNode->next;
    delete currNode->data;
    currNode = nextNode;
  }

}

void List::print() const
{
  Node* currNode = head;

  while (currNode != NULL) {
    currNode->data->print();
    currNode = currNode->next;
  }
}
