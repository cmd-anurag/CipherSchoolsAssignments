// Ques 3. Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

// Example 1:
// Input: nums = [1,2,3,1]
// Output: true

// Explanation:
// The element 1 occurs at the indices 0 and 3.

#include<unordered_set>
#include<iostream>
#include<vector>


using namespace std;

bool containsDuplicates(vector<int> array) {
    unordered_set<int> s;
    for(int i : array) {
        s.insert(i);
    }
    return s.size() != array.size();
}

int main() {
    vector<int> nums = {1, 2, 3, 4};
    if (containsDuplicates(nums)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}

