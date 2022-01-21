#ifndef MovieGroup_H
#define MovieGroup_H
#define MAX_ARR 64
#include "Movie.h"

class MovieGroup
{
  public:
    MovieGroup();
//    explicit MovieGroup(Book&);
    MovieGroup(const MovieGroup&);
    ~MovieGroup();
    void print();
    void add(Movie*);
    void merge(MovieGroup&);
  private:
    Movie* collection[MAX_ARR];
    int totalMovies;
};

#endif
