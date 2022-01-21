#ifndef BOOK_H
#define BOOK_H


/*
Class is for a Book object that will contain
an id, name and author
checkedin value is whether or not the book has been checked out/in
nextId is a placeholder id for a new book that may get added
*/
class Book
{
  public:
    Book(string="", string="");
    Book(Book&);
    ~Book();
    void print() const;
    bool isCheckedin();
    void checkIn();
    void checkOut();
    static int getNextId();
    int getBookID();
    string getAuthor();

  private:
    static int nextId;
    int id;
    bool checkedIn;
    string title;
    string author;
};

#endif
