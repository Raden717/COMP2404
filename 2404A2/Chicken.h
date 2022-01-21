#ifndef CHICKEN_H
#define CHICKEN_H

#include "Animal.h"
/*
Chicken class that inherits the animal class
eggcount is how many eggs the chicken can lay per week
*/
class Chicken : public Animal
{
  public:
    Chicken(string="Little Red Hen", int=0, float=0, int=0);
    virtual ~Chicken();
    void print() const;

  private:
    int eggCount;
};

#endif
