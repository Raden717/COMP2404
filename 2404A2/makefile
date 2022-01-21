a2:	main.o Animal.o List.o Farm.o AgCoop.o Chicken.o Cow.o Pig.o Control.o View.o
	g++ -o a2 main.o Animal.o List.o Farm.o AgCoop.o Chicken.o Cow.o Pig.o Control.o View.o

main.o:	main.cc Animal.h Chicken.h
	g++ -c main.cc

Animal.o:	Animal.cc Animal.h
	g++ -c Animal.cc

List.o:	List.cc List.h Animal.h
	g++ -c List.cc

Farm.o:	Farm.cc Farm.h Animal.h
	g++ -c Farm.cc

AgCoop.o:	AgCoop.cc AgCoop.h Farm.h Animal.h
	g++ -c AgCoop.cc

Chicken.o:	Chicken.cc Chicken.h Animal.h
	g++ -c Chicken.cc

Cow.o:	Cow.cc Cow.h Animal.h
	g++ -c Cow.cc

Pig.o:	Pig.cc Pig.h Animal.h
	g++ -c Pig.cc

Control.o:	Control.cc Control.h Animal.h View.h Farm.h AgCoop.h
	g++ -c Control.cc

View.o: View.cc View.h
	g++ -c View.cc




clean:
	rm -f *.o a2
