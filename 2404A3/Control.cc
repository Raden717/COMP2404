#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Control.h"
#include "Library.h"

Control::Control()
{
  CheckInLogger* l1 = new CheckInLogger("Checked In");
  library.subscribe(l1);
  CheckOutLogger* l2 = new CheckOutLogger("Checked Out");
  library.subscribe(l2);

}

void Control::launch()
{
  int bookId;
  int choice;

  initBooks();

  while (1) {
    view.showMenu(choice);

    if (choice == 0)
      break;

    view.printStr("Book id: ");
    view.readInt(bookId);

    if (choice == 1)
    library.checkOut(library.find(bookId));

    if (choice == 2)
    library.checkIn(library.find(bookId));

  }

}

void Control::initBooks()
{
  Book* b;

  b = new Book("Ender's Game", "Card, Orson Scott");
  library.add(b);
  b = new Book("Dune", "Herbert, Frank");
  library.add(b);
  b = new Book("Foundation", "Asimov, Isaac");
  library.add(b);
  b = new Book("Hitch Hiker's Guide to the Galaxy", "Adams, Douglas");
  library.add(b);
  b = new Book("1984", "Orwell, George");
  library.add(b);
  b = new Book("Stranger in a Strange Land", "Heinlein, Robert A.");
  library.add(b);
  b = new Book("Farenheit 451", "Bradbury, Ray");
  library.add(b);
  b = new Book("2001:  A Space Odyssey", "Clarke, Arthur C.");
  library.add(b);
  b = new Book("I, Robot", "Asimov, Isaac");
  library.add(b);
  b = new Book("Starship Troopers", "Heinlein, Robert A.");
  library.add(b);
  b = new Book("Do Androids Dream of Electric Sheep?", "Dick, Philip K.");
  library.add(b);
  b = new Book("Neuromancer", "Gibson, William");
  library.add(b);
  b = new Book("Ringworld", "Niven, Larry");
  library.add(b);
  b = new Book("Rendezvous with Rama", "Clarke, Arthur C.");
  library.add(b);
  b = new Book("Hyperion", "Simmons, Dan");
  library.add(b);
}
