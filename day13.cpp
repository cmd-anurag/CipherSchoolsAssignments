#include <iostream>

using namespace std;

// Question 1 - Write C++ program to demonstrate how to create dynamic variable using new keyword.

void q1() {
    int* dynamicInt = new int();
    *dynamicInt = 42; 
    cout << "Value of dynamicInt: " << *dynamicInt << endl;
    delete dynamicInt;
}

int main() {
    q1();
}