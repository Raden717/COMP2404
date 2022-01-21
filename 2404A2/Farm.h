#ifndef FARM_H
#define FARM_H

#include "Animal.h"
#include "List.h"
/*
Farm class used to hold a list of animals
nextId is a static id used to create other farms
id is the unique id of the farm
*/
class Farm
{
  public:
    Farm();
    ~Farm();
    void add(Animal* a);
    void print() const;
    int getId();

  private:
    static int nextId;
    int id;
    List animals;
};

#endif
