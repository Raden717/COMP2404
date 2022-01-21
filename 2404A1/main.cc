#include <iostream>
using namespace std;

#include "Movie.h"
#include "MovieGroup.h"

void initMovies(MovieGroup& , MovieGroup& );

int main()
{
  MovieGroup g1;
  MovieGroup g2;
  //initializing
  cout<<"initMovies runs"<<endl;
  initMovies(g1,g2);
  MovieGroup all(g1);
  all.merge(g1);
  g1.print();
  cout<<"g1 finish Printing"<<endl;
  g2.print();
  cout<<"g2 finish Printing"<<endl;
  all.print();
  cout<<"all finish Printing"<<endl;
  cout<<"Should be organized"<<endl;
  //Adding to a new group
  MovieGroup g3;
  g3.add(new Movie("One",1));
  g3.add(new Movie("Ten",10));
  g3.add(new Movie("Two",2));
  g3.add(new Movie("Nine",9));
  g3.add(new Movie("Seven",7));
  g3.add(new Movie("Three",3));
  g3.add(new Movie("Eleven",11));
  g3.add(new Movie("Twelve",12));
  g3.add(new Movie("Fifteen",15));
  g3.add(new Movie("Thirteen",13));
  g3.add(new Movie("Fourteen",14));
  g3.add(new Movie("Eight",8));
  g3.add(new Movie("Five",5));
  g3.add(new Movie("Six",6));
  g3.add(new Movie("Four",4));

  g3.print();
  cout<<"g3 finish Printing before merging"<<endl;
  //Merging multiple times
  g3.merge(g1);
  g3.merge(g2);
  g3.add(new Movie("Second One",1));
  g3.add(new Movie("Second Ten",10));
  g3.add(new Movie("Second Two",2));
  g3.add(new Movie("Second Nine",9));
  g3.add(new Movie("Second Seven",7));
  g3.add(new Movie("Second Three",3));
  g3.add(new Movie("Second Eleven",11));
  g3.add(new Movie("Second Twelve",12));
  g3.add(new Movie("Second Fifteen",15));
  g3.add(new Movie("Second Thirteen",13));
  g3.add(new Movie("Second Fourteen",14));
  g3.add(new Movie("Second Eight",8));
  g3.add(new Movie("Second Five",5));
  g3.add(new Movie("Second Six",6));
  g3.add(new Movie("Second Four",4));
  cout<<"g3 print after merging"<<endl;
  g3.print();
  cout<<"line break"<<endl<<endl;
  MovieGroup g4;
  g4.add(new Movie("Third One",1));
  g4.add(new Movie("Third Ten",10));
  g4.add(new Movie("Third Two",2));
  g4.add(new Movie("Third Nine",9));
  g4.add(new Movie("Third Seven",7));
  g4.add(new Movie("Third Three",3));
  g4.add(new Movie("Third Eleven",11));
  g4.add(new Movie("Third Twelve",12));
  g4.add(new Movie("Third Fifteen",15));
  g4.add(new Movie("Third Thirteen",13));
  g4.add(new Movie("Third Fourteen",14));
  g4.add(new Movie("Third Eight",8));
  g4.add(new Movie("Third Five",5));
  g4.add(new Movie("Third Six",6));
  g4.add(new Movie("Third Four",4));
  g4.merge(g3);
  //Trying to merge over 64 items
  cout<<endl;
  g4.print();
  cout<<endl<<"New list merged and add, there shouldn't be more than 64 items in this print statement"<<endl<<endl;


  return 0;
}


void initMovies(MovieGroup& movies1, MovieGroup& movies2)
{
  movies1.add(new Movie("E.T. The Extra-Terrestrial", 1982));
  movies1.add(new Movie("Metropolis", 1927));
  movies1.add(new Movie("Gravity", 2013));
  movies1.add(new Movie("Arrival", 2016));
  movies1.add(new Movie("Star Wars: The Last Jedi", 2017));
  movies1.add(new Movie("Alien", 1979));
  movies1.add(new Movie("War for the Planet of the Apes", 2017));
  movies1.add(new Movie("Wall-E", 2008));
  movies1.add(new Movie("Star Trek", 2009));
  movies1.add(new Movie("Terminator", 1984));
  movies1.add(new Movie("Invasion of the Body Snatchers", 1956));
  movies1.add(new Movie("The Day the Earth Stood Still", 1951));
  movies1.add(new Movie("Jurassic Park", 1993));
  movies1.add(new Movie("Back to the Future", 1985));
  movies1.add(new Movie("Blade Runner", 1982));

  movies2.add(new Movie("The Wizard of Oz", 1939));
  movies2.add(new Movie("Citizen Kane", 1941));
  movies2.add(new Movie("Casablanca", 1942));
  movies2.add(new Movie("Psycho", 1960));
  movies2.add(new Movie("King Kong", 1933));
  movies2.add(new Movie("Rear Window", 1954));
  movies2.add(new Movie("Rebecca", 1940));
  movies2.add(new Movie("Vertigo", 1958));
  movies2.add(new Movie("Lawrence of Arabia", 1962));
  movies2.add(new Movie("The Grapes of Wrath", 1940));
  movies2.add(new Movie("Chinatown", 1974));
  movies2.add(new Movie("Gone with the Wind", 1939));
  movies2.add(new Movie("Invasion of the Body Snatchers", 1956));
  movies2.add(new Movie("It's a Wonderful Life", 1946));
  movies2.add(new Movie("Doctor Zhivago", 1965));
}
