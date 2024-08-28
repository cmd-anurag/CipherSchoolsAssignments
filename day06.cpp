#include <iostream>
#define SIZE 50

using namespace std;

// Ques-01  Write a C++ program that takes an array as input and prints the sum of the array.
void sumOfArray(int array[], int size) {
    int sum = 0;
    for(int i = 0; i < size; ++i) {
        sum += array[i];
    }
    cout << "Sum of the array: " << sum << endl;
}

// Ques-02   Write a C++ program that takes an array as input and prints the sum of odd numbers and the sum of even numbers separately.
void sumOfOddandEven(int array[], int size) {
    int oddSum = 0;
    int evenSum = 0;
    for(int i = 0; i < size; ++i) {
        if(array[i]%2==0) {
            evenSum += array[i];
        }
        else {
            oddSum += array[i];
        }
    }
    cout << "Sum of odd numbers: " << oddSum << endl;
    cout << "Sum of even numbers: " << evenSum << endl;
}

// Ques-03  Write a C++ program that takes an array as input and prints the number of odd numbers and the number of even numbers in the array.
void countOddandEven(int array[], int size) {
    int oddCount = 0;
    int evenCount = 0;
    for(int i = 0; i < size; ++i) {
        if(array[i]%2==0) {
            ++evenCount;
        }
        else {
            ++oddCount;
        }
    }
    cout << "Number of odd numbers: " << oddCount << endl;
    cout << "NUmber of even numbers: " << evenCount << endl;
}

int main() {
    int array[SIZE];
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the array: ";
    for(int i = 0; i < n; ++i) {
        cin >> array[i];
    }
    sumOfArray(array, n);
    sumOfOddandEven(array, n);
    countOddandEven(array, n);
}