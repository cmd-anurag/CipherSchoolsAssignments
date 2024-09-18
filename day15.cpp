#include<iostream>
using namespace std;


// Ques 1: Write a program that defines a Student class and uses the this pointer in a member function to display the student's details.
class Student {
    public:
    string name;
    int roll;
    int age;

    void displayDetails() {
        cout << "Name: " << this->name << endl;
        cout << "Roll: " << this->roll << endl;
        cout << "Age: " << this->age << endl;
    }
}

// Ques 2: Write a C++ code  that take linked list from user input and a value integer . Delete the value from the linkedlist.   
class Node {
    public:
    int val;
    Node* next;
}
void deleteNode(Node* &head, int value) {
    if (head == nullptr) return;

    if (head->val == value) {
        Node* del = head;
        head = head->next;
        delete del;
        return;
    }

    Node* current = head;
    while (current->next != nullptr && current->next->val != value) {
        current = current->next;
    }

    if (current->next == nullptr) return;

    Node* del = current->next;
    current->next = current->next->next;
    delete del;
}

int main()
{
    return 0;
}