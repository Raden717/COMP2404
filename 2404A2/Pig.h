#ifndef PIG_H
#define PIG_H

#include "Animal.h"
/*
Pig class that inherits the animal class
pigLives is an integer that tells us where the pig lives
*/
class Pig : public Animal
{
  public:
    Pig(string="Pig", int=0, float=0, int=0);
    virtual ~Pig();
    void print() const;

  private:
    int pigLives;
};

#endif
