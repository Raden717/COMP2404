#ifndef AGCOOP_H
#define AGCOOP_H

#define MAX_SIZE 16

#include "Farm.h"
#include "Animal.h"
/*
Class is for holding a an array of Farm pointers
arrayCount is the number of current farms in the array
farms is the array containing siad farm pointers
*/
class AgCoop
{
  public:
    AgCoop();
    virtual ~AgCoop();
    void add(Farm* f);
    void add(int id, Animal* a);
    void print() const;

  private:
    int arrayCount;
    Farm* farms[MAX_SIZE];
};

#endif
