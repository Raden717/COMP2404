#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include "Book.h"
#include "List.h"
#include "Logger.h"

/*
Class used to hold a list of books
and a collection of loggers
*/
class Library
{
  public:
    ~Library();
    void subscribe(Logger* logger);
    void notify(Book* b);
    void add(Book* b);
    Book* find(int id);
    void checkOut(Book* b);
    void checkIn(Book* b);
    void print();

  private:
    List master;
    vector<Logger*> loggers;

};

#endif
