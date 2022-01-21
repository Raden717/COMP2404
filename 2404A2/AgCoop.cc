#include <iostream>
using namespace std;
#include <string>

#include "Farm.h"
#include "AgCoop.h"

AgCoop::AgCoop()
{
  arrayCount = 0;
  //cout<<"-- default ctor: agcoop "<<endl;
}

AgCoop::~AgCoop()
{
  for(int i = 0; i < arrayCount;++i){
    delete farms[i];
  }
  arrayCount = 0;
  //cout<<"-- dtor: agcoop "<<endl;
}


void AgCoop::add(Farm* f){
  if(arrayCount < 16){
    farms[arrayCount] = f;
    arrayCount++;
  }
}


void AgCoop::add(int id, Animal* a){
  for(int i = 0; i < arrayCount; ++i){
    if(farms[i]->getId() == id){
      farms[i]->add(a);
    }
  }
}

void AgCoop::print() const
{
  for(int i = 0; i < arrayCount; ++i){
    farms[i]->print();
  }
}
