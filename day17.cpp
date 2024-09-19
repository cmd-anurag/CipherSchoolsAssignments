#include<iostream>
using namespace std;

// Ques 1: Write a C++ code that take 2D array and key from user. Now you have to check that key exist inside the array or not if it exits print YES otherwise NO.
void findKey(int array[][10], int r, int c, int key) {
    for(int i = 0; i < r; ++i) {
        for(int j = 0; j < c; ++j) {
            if(array[i][j] == key) {
                cout << "YES" << '\n';
                return;
            }
        }
    }
    cout << "NO" << '\n';
}

// Ques 2: Write a C++ code that take 2D array from user input. Now you have to find sum of all values of the array.
int sum(int array[][10], int r, int c) {
    int sum = 0;
    for(int i = 0; i < r; ++i) {
        for(int j = 0; j < c; ++j) {
            sum+=array[i][j];
        }
    }
    return sum;
}

int main()
{
    int r, c, key;
    cout << "Enter number of rows and columns: ";
    cin >> r >> c;

    int array[10][10];
    cout << "Enter the elements of the array:\n";
    for(int i = 0; i < r; ++i) {
        for(int j = 0; j < c; ++j) {
            cin >> array[i][j];
        }
    }

    cout << "Enter the key to find: ";
    cin >> key;

    findKey(array, r, c, key);

    int totalSum = sum(array, r, c);
    cout << "Sum of all elements: " << totalSum << '\n';
    
    return 0;
}