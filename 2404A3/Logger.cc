#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;

#include "Logger.h"
#include "Book.h"

Logger::Logger(string loggerName)
  : name(loggerName)
{

}


void Logger::printLogs(){
  cout << "logger name:" << name << endl;
  books.print();
  cout << endl;
}

CheckInLogger::CheckInLogger(string loggerName) : Logger(loggerName)
{

}

void CheckInLogger::update(Book* b){
  if(b->isCheckedin() == true){
    books.add(b);
  }
  if(b->isCheckedin() == false){
    books.del(b->getBookID(),&b);
  }
}

CheckOutLogger::CheckOutLogger(string loggerName) : Logger(loggerName)
{

}

void CheckOutLogger::update(Book* b){
  if(b->isCheckedin() == true){
    books.del(b->getBookID(),&b);
  } else {
    books.add(b);
  }
}
