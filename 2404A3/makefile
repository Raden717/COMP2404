a3:	main.o Book.o List.o Logger.o Library.o View.o Control.o
	g++ -o a3 main.o Book.o List.o Logger.o Library.o View.o Control.o

main.o:	main.cc Control.h
	g++ -c main.cc

Book.o: Book.cc Book.h
	g++ -c Book.cc

List.o: List.cc List.h Book.h
	g++ -c List.cc

Logger.o: Logger.cc Logger.h Book.h List.h
	g++ -c Logger.cc

Library.o: Library.cc Library.h Logger.h Book.h List.h
	g++ -c Library.cc

View.o: View.cc View.h
	g++ -c View.cc

Control.o : Control.cc Control.h View.h Library.h
	g++ -c Control.cc




clean:
	rm -f *.o a3
