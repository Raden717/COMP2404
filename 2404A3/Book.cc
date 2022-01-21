#include <iostream>
using namespace std;
#include <string>
#include "Book.h"

int Book::nextId = 1001;

Book::Book(string t, string a)
{
  id     = nextId;
  ++nextId;
  title  = t;
  author = a;
  checkedIn = true;

  cout<<"Book: "<< title << " ID:" << id <<endl;
}

Book::Book(Book& orig)
{
  cout<<"-- copy ctor:  "<< orig.id <<endl;

  id     = orig.id;
  title  = orig.title;
  author = orig.author;
}

Book::~Book()
{
}

int Book::getNextId() { return nextId; }

int Book::getBookID() { return id; }

bool Book::isCheckedin() { return checkedIn;}

string Book::getAuthor() { return author; }

void Book::print() const
{
  if(checkedIn){
    cout<<"** "<< title <<" by "<<author<<" id: "<< id << " checked out: No"<< endl;
  } else {
    cout<<"** "<< title <<" by "<<author<<" id: "<< id << " checked out: Yes"<< endl;
  }
}

void Book::checkOut()
{
  checkedIn = false;
}

void Book::checkIn()
{
  checkedIn = true;
}
