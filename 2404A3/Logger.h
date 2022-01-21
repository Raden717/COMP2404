#ifndef LOGGER_H
#define LOGGER_H

#include <string>
#include <vector>
using namespace std;
#include "Book.h"
#include "List.h"


/*
Abstract class to a base class that will contain a list of books
*/
class Logger
{
  public:
    Logger(string = "logName");

    virtual void update(Book*) {};
    virtual void printLogs();

  protected:
    string name;
    List books;

};

/*
Concrete class that will contain a list of books that has
a checked in value of true
*/
class CheckInLogger : public Logger
{
  public:
    CheckInLogger(string = "Checked-In");
    void update(Book*);

};

/*
Concrete class that will contain a list of books that has
a checked in value of false
*/
class CheckOutLogger : public Logger
{
  public:
    CheckOutLogger(string = "Checked-Out");
    void update(Book*);

};

#endif
