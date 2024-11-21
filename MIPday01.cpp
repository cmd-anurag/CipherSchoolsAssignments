// Ques 1 :  Given an array of size N. The task is to find the maximum and the minimum element of the array using the minimum number of comparisons.

// Sample:-
// Input: arr[] = {3, 5, 4, 1, 9}
// Output: Minimum element is: 1
//               Maximum element is: 9

// Input: arr[] = {22, 14, 8, 17, 35, 3}
// Output:  Minimum element is: 3
//               Maximum element is: 35. 
//  Take all the input from user. 
// Write all the posible solutions. 

#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

void findMinMax(const vector<int>& arr, int& min, int& max) {
    min = INT_MAX;
    max = INT_MIN;
    for (int num : arr) {
        if (num < min) {
            min = num;
        }
        if (num > max) {
            max = num;
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int min, max;
    findMinMax(arr, min, max);

    cout << "Minimum element is: " << min << endl;
    cout << "Maximum element is: " << max << endl;

    return 0;
}