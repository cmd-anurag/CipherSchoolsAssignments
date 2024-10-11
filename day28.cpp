#include<iostream>
using namespace std;

// Ques 1. You are tasked with creating a simple vehicle system in C++ using object-oriented programming principles. Implement a base class Vehicle and two derived classes Car and Bike. Each vehicle can perform certain common actions, but they also have specific attributes and methods.

// Requirements:

// Base Class: Vehicle
// Attributes:
// string make: The manufacturer of the vehicle.
// int year: The year the vehicle was manufactured.
// float fuel: The amount of fuel left in the vehicle.
// Methods:
// void refuel(float amount): Increases the fuel by amount.
// void display(): A virtual method that displays the vehicle's details.
// Derived Class: Car (inherits from Vehicle)
// Attributes:
// int doors: Number of doors in the car.
// Methods:
// void display(): Override the display() method to show car-specific details, including the number of doors.
// void openDoors(): A method that prints "Doors are opened."
// Derived Class: Bike (inherits from Vehicle)
// Attributes:
// bool hasCarrier: Indicates whether the bike has a carrier.
// Methods:
// void display(): Override the display() method to show bike-specific details, including whether it has a carrier.
// void kickStart(): A method that prints "Bike kick-started."
// Main Functionality:
// Create objects of Car and Bike with relevant attributes.
// Refuel both vehicles and display their details.
// Call their specific methods (openDoors() for Car and kickStart() for Bike).

class Vehicle {
    protected:
    string make;
    int year;
    float fuel;

    public:
    Vehicle() {};
    Vehicle(string m, int y, float f) : make(m), year(y), fuel(f) {};
    
    void refuel(float amount) {
        if(amount <= 0) {
            cout << "Invalid";
            return;
        }
        cout << "Fuel level increased from " << fuel << " to " << fuel + amount << '\n';
        fuel += amount;
    }

    virtual void display() = 0;

};

class Car : public Vehicle {
    int doors;

    public:
    Car() {};
    Car(string m, int y, float f, int d) : Vehicle(m,y,f), doors(d) {};

    void display() override {
        cout << "Car's Make: " << make << '\n';
        cout << "Manufactured in: " << year << '\n';
        cout << "Number of doors: " << doors << '\n';
    }

    void openDoors() {
        cout << "Doors are opened.\n";
    }

};

class Bike : public Vehicle {
    bool hasCarrier;

    public:
    Bike() {};
    Bike(string m, int y, float f, bool hc) : Vehicle(m,y,f), hasCarrier(hc) {};
     void display() override {
        cout << "Bike's Make: " << make << '\n';
        cout << "Manufactured in: " << year << '\n';
        cout << "Bike has carrier " << hasCarrier << '\n';
    }

    void kickStart() {
        cout << "Bike kick-started.\n";
    }

};

int main()
{
    Car Tata("Tata", 1990, 10, 4);
    Bike Hero("Hero", 2003, 20, true);

    Tata.display();
    Tata.openDoors();
    Tata.refuel(5);

    Hero.display();
    Hero.kickStart();
    Hero.refuel(8);

    return 0;
}