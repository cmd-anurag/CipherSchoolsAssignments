#include<iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

// Ques 1: You are given an array of integer and target integer now you have to tell it posible to select two elements from an array such that their sum is equal to target. If it is possible then print YES otherwise print NO. Sample testcase arr :[2,7,11,15], target = 9 output : YES . Write code that work in O(n^2) complexity and O(n*logn) complexity.  Take all the required input from user.

// O(n^2) complexity solution
bool q1_N2(const vector<int>& arr, int target) {
    int n = arr.size();
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (arr[i] + arr[j] == target) {
                return true;
            }
        }
    }
    return false;
}

// O(n*logn) complexity solution
bool q1_nlogn(vector<int>& arr, int target) {
    sort(arr.begin(), arr.end());
    int left = 0, right = arr.size() - 1;
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
            return true;
        } else if (sum < target) {
            ++left;
        } else {
            --right;
        }
    }
    return false;
}

int main() {
    int n, target;
    
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cin >> target;

    cout << q1_N2(arr, target) << "\n";
    cout << q1_nlogn(arr, target);

    return 0;
}
