#include <iostream>
using namespace std;
#include <string>
#include "Farm.h"

int Farm::nextId = 1001;

Farm::Farm()
{
  id     = nextId;
  ++nextId;

  cout<<"There is a farm:  "<< id <<endl;
}

Farm::~Farm()
{
  //cout<<"-- dtor:  "<< id <<endl;
}

int Farm::getId() { return id; }

void Farm::add(Animal* a){
  animals.add(a);
}

void Farm::print() const
{
  cout<<"Animals in farm:  "<< id <<endl;
  animals.print();
  cout<<endl;
}
