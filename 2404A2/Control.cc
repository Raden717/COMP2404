#include <iostream>
using namespace std;
#include <string>

#include "Control.h"
#include "View.h"
#include "Farm.h"
#include "Animal.h"
#include "Chicken.h"
#include "Cow.h"
#include "Pig.h"
#include "AgCoop.h"

void Control::initAnimals()
{
  a = new AgCoop();

  Farm* farm[5];
  farm[0] = new Farm();
  farm[1] = new Farm();
  farm[2] = new Farm();
  farm[3] = new Farm();
  farm[4] = new Farm();

  for(int i = 0 ; i < 5 ; ++i){
    a->add(farm[i]);
  }



  farm[0]->add(new Chicken("Chick0", 2, 4, 132));
  farm[1]->add(new Chicken("Chick1", 3, 7, 322));
  farm[2]->add(new Chicken("Chick2", 5, 6, 372));
  farm[3]->add(new Chicken("Chick3", 32, 41, 432));
  farm[4]->add(new Chicken("Chick4", 16, 32, 232));
  farm[3]->add(new Pig("Pig0",1,7,1));
  farm[2]->add(new Pig("Pig1",3,9,7));
  farm[1]->add(new Pig("Pig2",2,5,2));
  farm[4]->add(new Pig("Pig3",25,8,3));
  farm[0]->add(new Pig("Pig4",51,8,3));
  farm[3]->add(new Cow("Cow0",3,8,"01:05"));
  farm[4]->add(new Cow("Cow1",1,7,"00:45"));
  farm[2]->add(new Cow("Cow2",4,6,"01:25"));
  farm[1]->add(new Cow("Cow3",7,6,"02:25"));
  farm[0]->add(new Cow("Cow4",9,6,"03:25"));


}


void Control::launch()
{
  int    choice, age, lf, ec, fid, pen;
  string name, milk;
  View view;

  initAnimals();

  while (1) {
    view.showMenu(choice);
    if (choice == 0){
      a->print();
      break;
      }

    view.printStr("Farm ID: ");
    view.readInt(fid);
    view.printStr("Name: ");
    view.readStr(name);
    view.printStr("Age: ");
    view.readInt(age);
    view.printStr("Lifespan: ");
    view.readInt(lf);

    if (choice == 1) {
      view.printStr("eggs: ");
      view.readInt(ec);
      a->add(fid,new Chicken(name,age,lf,ec));

    }
    else if (choice == 2) {

      view.printStr("milk time: ");
      view.readStr(milk);
      a->add(fid,new Cow(name,age,lf,milk));

    }
    else if (choice == 3) {
      view.printStr("pen: ");
      view.readInt(pen);
      a->add(fid,new Pig(name,age,lf,pen));

    }
  }


}
