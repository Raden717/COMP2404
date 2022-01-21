#ifndef COW_H
#define COW_H

#include "Animal.h"
/*
Cow class that inherits the animal class
milkTime is how long it takes for the cow to be milked
*/
class Cow : public Animal
{
  public:
    Cow(string="Cow", int=0, float=0, string="HH:MM");
    virtual ~Cow();
    void print() const;

  private:
    string milkTime;
};

#endif
