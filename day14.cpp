#include<iostream>
using namespace std;

// Ques 1: Define a car class with properties brand name , model, engine, number of seats and method displayInfo that display the all information of class. 
class Car {
    public:
    string name;
    string model;
    string engine;
    int noOfSeats;

    void displayInfo() {
        cout << "Brand Name: " << name << endl;
        cout << "Model: " << model << endl;
        cout << "Engine: " << engine << endl;
        cout << "Number of Seats: " << noOfSeats << endl;
    }
};

// Ques 2:  Write a program that defines a Rectangle class with a copy constructor
class Rectangle {
    public:
    int length;
    int breadth;

    Rectangle(int l=0, int b=0) : length(l), breadth(b) {};

    Rectangle(Rectangle& obj) {
        this->length = obj.length;
        this->breadth = obj.breadth;
    }
};




int main()
{
    // Ques 1
    Car car1;
    car1.name = "Tata";
    car1.model = "Nexon";
    car1.engine = "V6";
    car1.noOfSeats = 5;
    car1.displayInfo();

    // Ques 2
    Rectangle rect1;
    rect1.length = 10;
    rect1.breadth = 5;

    Rectangle rect2 = rect1;
    cout << "Rectangle 2 Length: " << rect2.length << endl;
    cout << "Rectangle 2 Breadth: " << rect2.breadth << endl;

    return 0;
}