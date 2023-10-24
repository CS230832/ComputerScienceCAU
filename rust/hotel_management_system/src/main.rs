use std::io;

#[derive(Debug, Default, Clone, PartialEq)]
struct Room {
    number: u32,
    price: u32,
    guest_name: Option<String>,
}

#[derive(Debug, Default, Clone, PartialEq)]
struct Hotel {
    rooms: Vec<Room>,
}

fn main() {
    println!("Hello! Welcome to Hotel Management System!");

    let mut hotel = Hotel::new();

    let mut choice;

    loop {
        println!("Please choose one of the following options:");
        println!("1. 'Add'/'a' to add a new room;");
        println!("2. 'Book'/'b' to book a room;");
        println!("3. 'Checkout'/'c' to check out;");
        println!("4. 'Display'/'d' to display all rooms;");
        println!("5. 'Exit'/'quit'/'q' to exit");

        choice = get_line().unwrap().to_lowercase();

        match choice.as_str() {
            "add" | "a" => {
                println!("Add a new room:");
                println!("Enter room number: ");
                let number = get_line().unwrap().parse().unwrap();
                println!("Enter room price: ");
                let price = get_line().unwrap().parse().unwrap();

                hotel.add_room(number, price);
            }
            "book" | "b" => {
                println!("Book a room:");
                println!("Enter guest name: ");

                hotel.book_room(get_line().unwrap().as_str());
            }
            "checkout" | "c" => {
                println!("---------------------------------------------------------------------------------------------------------");
                println!("Currently booked rooms:");
                hotel
                    .rooms
                    .iter()
                    .filter(|room| room.guest_name.is_some())
                    .for_each(|room| println!("{room}"));

                println!("---------------------------------------------------------------------------------------------------------");
            
                println!("Enter your room number to check out:");
                hotel.check_out(get_line().unwrap().parse().unwrap());
            }
            "display" | "d" => {
                println!("Display all rooms:");
                hotel.display_all();
            }
            "exit" | "quit" | "q" => {
                break;
            }
            _ => {}
        }
    }
}

impl Hotel {
    fn new() -> Self {
        Self { rooms: Vec::new() }
    }

    fn add_room(&mut self, number: u32, price: u32) {
        self.rooms.push(Room::new(number, price));
    }

    fn book_room(&mut self, guest_name: &str) {
        println!("---------------------------------------------------------------------------------------------------------");
        println!("Available Rooms:");
        let empty_rooms: Vec<&mut Room> = self
            .rooms
            .iter_mut()
            .filter(|room| {
                if room.guest_name.is_none() {
                    println!("{}", room);
                }
                room.guest_name.is_none()
            })
            .collect();
        println!("---------------------------------------------------------------------------------------------------------");

        if empty_rooms.is_empty() {
            println!("Unfortunately, all the rooms are booked!");
        } else {
            println!("Enter a room number you want to book:");
            let number = get_line().unwrap().parse().unwrap();

            for room in empty_rooms {
                if room.number == number {
                    room.guest_name = Some(guest_name.to_string());
                    println!("You have successfully booked the {room}");
                    break;
                }
            }
        }
    }

    fn check_out(&mut self, number: u32) {
        self.rooms.iter_mut().find(|room| room.number == number).unwrap().guest_name = None;
    }

    fn display_all(&self) {
        println!("---------------------------------------------------------------------------------------------------------");
        println!("All Rooms:");
        for room in self.rooms.iter() {
            println!("{room}");
        }
        println!("---------------------------------------------------------------------------------------------------------");
    }
}

impl Room {
    fn new(number: u32, price: u32) -> Self {
        Self {
            number,
            price,
            guest_name: None,
        }
    }
}

impl std::fmt::Display for Room {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        write!(
            f,
            "Room {{ number: {}, price: {}, is_booked: {}{} }}",
            self.number,
            self.price,
            self.guest_name.is_some(),
            if let Some(guest_name) = self.guest_name.as_ref() {
                format!(", guest_name: {}", guest_name)
            } else {
                String::new()
            }
        )
    }
}

fn get_line() -> io::Result<String> {
    let mut input = String::new();
    match io::stdin().read_line(&mut input) {
        Ok(_) => Ok(input.trim().to_string()),
        Err(err) => Err(err),
    }
}
