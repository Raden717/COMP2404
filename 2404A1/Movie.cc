#include <iostream>
using namespace std;
#include <string>
#include "Movie.h"
#include "MovieGroup.h"

Movie::Movie(string t, int y)
{
  title        = t;
  year         = y;
}

Movie::Movie(const Movie& copy)
{
  title        = copy.title;
  year         = copy.year;
  cout<<"-- copying  "<< title <<endl;
}


Movie::~Movie()
{
  cout<<"-- Movie dtor: --- "<< title <<endl;
}

void Movie::print()
{
  cout<<"** Movie "<< title <<" made in "<< year<<endl;
}

int Movie::getYear(){
  return year;
}
