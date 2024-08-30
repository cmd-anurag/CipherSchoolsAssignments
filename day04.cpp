#include <iostream>
#include <iomanip>

using namespace std;

// Ques:01:  Write a C++ program that takes two integers as input and performs the following arithmetic operations:
// Addition
// Subtraction
// Multiplication
// Division (ensure that you handle division by zero)
// Modulus
void performArithmetic(int num1, int num2) {
    int addition = num1 + num2;
    int subtraction = num1 - num2;
    int multiplication = num1 * num2;
    cout << "Addition: " << addition << endl;
    cout << "Subtraction: " << subtraction << endl;
    cout << "Multiplication: " << multiplication << endl;
    if(num2==0) {
        cout << "Division by zero is not possible" << endl;
        return;
    }
    float division = (float)num1/(float)num2;
    int modulus = num1%num2;
    
    cout << "Division: " << division << endl;
    cout << "Modulus: " << modulus << endl;
}

int main() {
    int num1, num2;

    cout << "Enter first integer: ";
    cin >> num1;

    cout << "Enter second integer: ";
    cin >> num2;

    performArithmetic(num1, num2);
    return 0;
}