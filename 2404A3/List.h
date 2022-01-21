#ifndef LIST_H
#define LIST_H

#include "Book.h"
/*
List class to create a linked list of book data
*/
class List
{
  class Node
  {
/*
    friend class List;
    private:
*/
    public:
      Book* data;
      Node*    next;
  };

  public:
    List();
    ~List();
    void add(Book*);
    void del(const int, Book**);
    void print() const;
    void cleanup();
    Book* find(int);

  private:
    Node* head;
};

#endif
