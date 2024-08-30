#include <iostream>

using namespace std;

// Ques-01  Write C++ program that take array from the user and  sort the array using bubble sort algorithm.      
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


// Ques-02  Write C++ program that take array from the user and  sort the array using insertion sort algorithm.
void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int e = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j] > e) {
            arr[j + 1] = arr[j];
            j--;
        }
        
        arr[j + 1] = e;
    }
}

void displayArray(int array[], int size) {
    for(int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    cout << "\n";
}


int main() {
    int size;
    int array[50];
    cin >> size;
    for(int i = 0; i<size; ++i) {
        cin >> array[i];
    }
    bubbleSort(array, size);
    displayArray(array, size);
    insertionSort(array, size);
    displayArray(array, size);
}