#ifndef ANIMAL_H
#define ANIMAL_H
/*
Animal class to create an animal object
name is the name of the animal
age is how old the animal is
lifespan is the expected lifespan of the animal
*/
class Animal
{
  public:
    Animal(string="Fluffy", int=0, float=0);
    virtual ~Animal();
    string getName() const;
    int    getAge()  const;
    virtual void   print()   const;

  protected:
    float  lifespan;

  private:
    string name;
    int    age;
};

#endif
