#include <iostream>

using namespace std;

// Ques 1: Write a C++ program that declares an integer variable, initializes it, and then declares a pointer that stores the address of this variable. Print the value of the variable using both the variable itself and the pointer.
void question1() {
    int x;
    x = 14;
    int* ptrx = &x;
    cout << x << "\n";
    cout << *ptrx << "\n";
}


// Ques 2: Write a program that declares an array of integers and a pointer that points to the first element of the array. Use pointer arithmetic to print all the elements of the array.
void question2() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    int n = 14;
    int *p = array;
    for(int i = 0; i < n; ++i) {
        cout << *(p+i) << " ";
    }
    cout << "\n";
}

// Create a program that demonstrates the use of a pointer to a pointer. Declare an integer variable, a pointer to the integer, and a pointer to that pointer. Use all three to print the value of the integer.
void question3() {
    int x = 14;
    int* px = &x;
    int** ppx = &px;

    cout << "Direct Variable: " << x << "\n";
    cout << "Through Pointer Variable: " << *px << "\n";
    cout << "Through Pointer to Pointer Variable: " << **ppx << "\n";
}

int main() {
    question1();
    question2();
    question3();
}