#include <iostream>
#include <vector>

using namespace std;

// Ques 1: You are given an array and target value. Your task is to find the target value that exists in the array. If it exists inside an array then print YES otherwise NO.

// If the array is unsorted
void isPresentInUnsorted(vector<int> array, int target) {
    for(int i : array) {
        if (i == target) {
            cout << "YES" << '\n';
            return;
        }
    }
    cout << "NO" << '\n';
}

// If the array is sorted
void isPresentInSorted(vector<int> array, int target) {
    int start = 0;
    int end = array.size() - 1;
    int middle;
    while (start <= end)
    {
        middle = (start+end)/2;
        if(target == array.at(middle)) {
            cout << "YES" << '\n';
            return;
        }
        else if(target < array.at(middle)) {
            end = middle - 1;
        }
        else {
            start = middle + 1;
        }
    }
    cout << "NO" << '\n';
}


// Ques 2: You are given an array and target value. You have to find the index of target value. If target doest exist inside the array then print  -1.Assume indexing is 1 based. 

// If the array is unsorted
int findIndexUnsorted(vector<int> array, int target) {
    int index = 0;
    for(int i : array) {
        if (i == target) {
           return index+1;
        }
        else {
            ++index;
        }
    }
    return -1;
}

// If the array is sorted
int findIndexSorted(vector<int> array, int target) {
    int start = 0;
    int end = array.size() - 1;
    int middle;
    while (start <= end)
    {
        middle = (start+end)/2;
        if(target == array.at(middle)) {
            return middle+1;
        }
        else if(target < array.at(middle)) {
            end = middle - 1;
        }
        else {
            start = middle + 1;
        }
    }
    return -1;
}


int main() {
    vector<int> array = {1, 8, 6, 2, 12, 4, 9};
    vector<int> array1 = {1, 2, 3, 4, 5, 6, 7};
    isPresentInUnsorted(array, 3);
    isPresentInSorted(array1, 3);
    cout << findIndexUnsorted(array, 8) << '\n';
    cout << findIndexSorted(array1, 7) << '\n';
}