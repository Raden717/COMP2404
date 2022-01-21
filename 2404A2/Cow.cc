#include <iostream>
using namespace std;
#include <string>

#include "Cow.h"

Cow::Cow(string n, int a, float l, string e) : milkTime(e), Animal(n,a,l)
{
  //cout << "-- Cow ctor: " << getName() << endl;
//  name = n;
//  age  = a;
//  lifespan = l;
//  milktime = e;
}

Cow::~Cow()
{
  //cout << "-- Cow dtor: " << getName() << endl;
}

void Cow::print() const
{
  Animal::print();
  cout << " and I'm a Cow that can produce milk in " << milkTime << " time " << endl;
}
