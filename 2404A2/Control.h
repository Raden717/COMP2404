#ifndef CONTROL_H
#define CONTROL_H

#include "View.h"
#include "AgCoop.h"

class Control
{
  public:
    void initAnimals();
    void launch();

  private:
    AgCoop* a;
    View view;

};

#endif
