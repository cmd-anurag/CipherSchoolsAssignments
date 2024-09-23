#include<iostream>
#include<tuple>

using namespace std;

// Ques 1: You are tasked with creating a Person class in C++ that stores details of a person, such as firstName, lastName, and age. The class should:
// Have a constructor that takes firstName, lastName, and age as arguments and initializes the member variables.
// Include a method getFullName() that returns the full name of the person (a concatenation of firstName and lastName).
// Add a method getDetails() that returns the firstName, lastName, and age in a tuple.
// Demonstrate the usage of structured bindings to unpack the tuple returned by getDetails().

class Person {
    string firstName;
    string lastName;
    int age;

    public:
        Person(string fname, string lname, int a) : firstName(fname), lastName(lname), age(a) {};
        
        string getFullName() {
            return firstName+" "+lastName;
        }

        tuple<string, string, int> getDetails() {
            tuple<string, string, int> result = make_tuple(this->firstName, this->lastName, this->age);
            return result;
        }
};


int main()
{
    Person p1("Anurag", "Kumar", 20);
    
    auto [firstName, lastName, age] = p1.getDetails();
    cout << firstName << " " << lastName << '\n';
    cout  << age;
    return 0;
}
#include<iostream>
#include<tuple>

using namespace std;

// Ques 1: You are tasked with creating a Person class in C++ that stores details of a person, such as firstName, lastName, and age. The class should:
// Have a constructor that takes firstName, lastName, and age as arguments and initializes the member variables.
// Include a method getFullName() that returns the full name of the person (a concatenation of firstName and lastName).
// Add a method getDetails() that returns the firstName, lastName, and age in a tuple.
// Demonstrate the usage of structured bindings to unpack the tuple returned by getDetails().

class Person {
    string firstName;
    string lastName;
    int age;

    public:
        Person(string fname, string lname, int a) : firstName(fname), lastName(lname), age(a) {};
        
        string getFullName() {
            return firstName+" "+lastName;
        }

        tuple<string, string, int> getDetails() {
            tuple<string, string, int> result = make_tuple(this->firstName, this->lastName, this->age);
            return result;
        }
};


int main()
{
    Person p1("Anurag", "Kumar", 20);
    cout << p1.getFullName() << '\n';
    auto [firstName, lastName, age] = p1.getDetails();
    cout << firstName << " " << lastName << '\n';
    cout  << age;
    return 0;
}