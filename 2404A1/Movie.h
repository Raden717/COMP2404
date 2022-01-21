#ifndef MOVIE_H
#define MOVIE_H


class Movie
{
  public:
    Movie(string="", int=0);
//    explicit Movie(Book&);
    Movie(const Movie&);
    ~Movie();
    void print();
    int getYear();

  private:
    string title;
    int year;
};

#endif
