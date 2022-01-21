#include <iostream>
using namespace std;
#include <string>
#include "MovieGroup.h"

MovieGroup::MovieGroup()
{
  totalMovies = 0; //Default value on initializing
  cout<<"-- default MovieGroup ctor:  " <<endl;
}

MovieGroup::MovieGroup(const MovieGroup& copy)
{
  totalMovies = 0;
  for(int i = 0; i < copy.totalMovies;++i){
    add(new Movie(*copy.collection[i])); //Adds copied movie
  }

  cout<<"-- copying  " <<totalMovies<<endl;
}


MovieGroup::~MovieGroup()
{
  for(int i = 0; i < totalMovies;++i){
    delete collection[i]; //Deletes each movie
  }
}

void MovieGroup::print()
{
  cout<<"-- Printing" <<endl;
  for(int i = 0; i < totalMovies;++i){
    cout<<"Item :"<<i+1<<endl;
    (*collection[i]).print(); //Prints each movie
  }
}


void MovieGroup::add(Movie* m){

  if(totalMovies == MAX_ARR){ //List is full
    cout << "Movie could not be added as the list is full" << endl;
    delete m;
  } else {

    for(int i = totalMovies; totalMovies >= 0;--i){

      if(i == 0){ //Lowest value, there is no value below this so it ends here
        Movie* m1(m);
        collection[i] = m1;
        break;
      }

      int year1 = (*m).getYear();
      int year2 = (*collection[i-1]).getYear();

      if(year1 <= year2){ //Shifts value below to the right
        Movie* m1(collection[i-1]);
        collection[i] = m1;
      } else { //New value goes here as this value was already shifted to the right
        Movie* m1(m);
        collection[i] = m1;
        break;
      }

    }
    ++totalMovies; //Adds to movie count
  }

}

void MovieGroup::merge(MovieGroup& mg){
    for(int i = 0 ; i < mg.totalMovies ; ++i){
      Movie* mg1 = new Movie(*mg.collection[i]); //copies movie
      add(mg1); //adds movie
    }
}
