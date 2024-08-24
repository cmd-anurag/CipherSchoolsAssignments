#include <iostream>
using namespace std;

// Ques - 01:   Write a C++ program that takes an integer N as input from the user and calculates the sum of the first N natural numbers using a for loop.
int calculateSum(int N) {
    int sum = 0;
    for (int i = 1; i <= N; i++) {
        sum += i;
    }
    return sum;
}

// Ques-02:   Write a C++ program that takes an integer N as input from the user and calculates the factorial of N using a loop.
int calculateFactorial(int N) {
    int factorial = 1;
    for (int i = 1; i <= N; i++) {
        factorial *= i;
    }
    return factorial;
}

// Ques - 03:   Write a C++ program that takes an integer N as input from the user and prints the multiplication table of N up to 10 using a  loop.

void printTable(int N) {
    cout << "Multiplication table of " << N << ":\n";
    for (int i = 1; i <= 10; i++) {
        cout << N << " x " << i << " = " << N * i << "\n";
    }
}

int main() {
    int N;
    
    cout << "Enter a number: ";
    cin >> N;
    int sum = calculateSum(N);
    cout << "The sum of the first " << N << " natural numbers is: " << sum << "\n";

    cout << "Enter a number: ";
    cin >> N;
    int factorial = calculateFactorial(N);
    cout << "The factorial of " << N << " is: " << factorial << "\n";

    cout << "Enter a number: ";
    cin >> N;
    printTable(N);

    return 0;
}