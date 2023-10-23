#include <iostream>
#include <string>
#include <vector>

struct Room {
  int number;
  int price;
  bool isBooked;
  std::string guestName;
};

struct Hotel {
  std::vector<Room> rooms;
};

void addRoom(Hotel*, int, int);
void bookRoom(Hotel*, std::string);
void checkOut(Hotel*, int);
void displayAll(Hotel*);

int main() {
  std::cout << std::boolalpha << "Hello Welcome to Hotel Management System\n";

  int choice = 0;

  Hotel hotel;

  do {
    std::cout << "Please choose one of the following options\n";
    std::cout << "1. Add a new room;\n";
    std::cout << "2. Book a room;\n";
    std::cout << "3. Check out;\n";
    std::cout << "4. Display all rooms;\n";
    std::cout << "5. Exit.\n";

    std::cin >> choice;

    std::cout << std::endl;

    switch (choice) {
    case 1:
      {
        std::cout << "Add a new room\n";
        int number = 0;
        int price = 0;

        std::cout << "Enter room number: ";
        std::cin >> number;
        std::cout << "Enter room price: ";
        std::cin >> price;

        addRoom(&hotel, number, price);
      }

      break;
    case 2:
      {
        std::cout << "Book a room\n";

        std::string guestName = "";
        std::cout << "Enter guestName: ";
        std::cin >> guestName;

        bookRoom(&hotel, guestName);
      }
      break;
    case 3:
      {
        std::cout << "Check out\n";
        
        std::cout << "---------------------------------------------------------------------------------------\n";
        std::cout << "Currently booked rooms:\n";

        for (Room &room : hotel.rooms)
          if (room.isBooked)
            std::cout << "Room { number: " << room.number << ", price: " << room.price << ", isBooked: true, guestName: " << room.guestName << " }\n";

        std::cout << "---------------------------------------------------------------------------------------\n";

        int roomNumber = 0;
        std::cout << "Enter your room number to check out: ";
        std::cin >> roomNumber;

        checkOut(&hotel, roomNumber);
      }
      break;
    case 4:
      {
        std::cout << "Display all rooms\n";
        displayAll(&hotel);
      }
      break;
    case 5:
      std::cout << "Exit\n";
      break;
    default:
      break;
    }

    std::cout << std::endl << std::endl;
  } while(choice != 5);

  return 0;
}

void addRoom(Hotel *hotel, int number, int price) {
  Room room;
  room.number = number;
  room.price = price;
  room.isBooked = false;
  room.guestName = "";
  hotel->rooms.push_back(room);

  std::cout << "Successfully added room with number " << number << " and price of " << price << std::endl;
}

void bookRoom(Hotel *hotel, std::string guestName) {
  std::vector<Room *> empty_rooms = {};
  
  std::cout << "---------------------------------------------------------------------------------------\n";
  std::cout << "Available rooms:\n";
  for (Room &room : hotel->rooms)
    if (!room.isBooked) {
      std::cout << "Room { number: " << room.number << ", price: " << room.price << " };\n";
      empty_rooms.push_back(&room);
    }
  std::cout << "---------------------------------------------------------------------------------------\n";

  if (empty_rooms.size() == 0)
    std::cout << "Unfortunately, all the rooms are booked right now!\n";
  else {

    int roomNumber = 0;
    std::cout << "Enter the room number you want to book: ";
    std::cin >> roomNumber;

    for (Room *room: empty_rooms)
      if (room->number == roomNumber) {
        room->isBooked = true;
        room->guestName = guestName;
        std::cout << "You have successfully booked the room with number " << roomNumber << " for the price of " << room->price << std::endl;
        break;
      }
    
  }
}

void checkOut(Hotel *hotel, int number) {
  for (Room &room : hotel->rooms)
    if (room.number == number) {
      room.isBooked = false;
      room.guestName = "";
      break;
    }
}

void displayAll(Hotel *hotel) {
  std::cout << "---------------------------------------------------------------------------------------\n";
  std::cout << "Rooms:\n";
  for (Room &room : hotel->rooms) {
    std::cout << "Room { number: " << room.number << ", price: " << room.price << ", isBooked: " << room.isBooked;
    if (room.isBooked)
      std::cout << ", guestName: " << room.guestName;
    std::cout << "}\n";
  }
  std::cout << "---------------------------------------------------------------------------------------\n";
}