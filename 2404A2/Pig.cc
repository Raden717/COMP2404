#include <iostream>
using namespace std;
#include <string>

#include "Pig.h"

Pig::Pig(string n, int a, float l, int e) : pigLives(e), Animal(n,a,l)
{
  //cout << "-- Pig ctor: " << getName() << endl;
//  name = n;
//  age  = a;
//  lifespan = l;
//  pigLives = e;
}

Pig::~Pig()
{
  //cout << "-- Pig dtor: " << getName() << endl;
}

void Pig::print() const
{
  Animal::print();
  cout << " and I'm a Pig that lives in " << pigLives << endl;
}
