#include<iostream>
#include<vector>

using namespace std;

// Ques 1. Given an array, find the nearest smaller element G[i] for every element A[i] in the array such that the element has an index smaller than i.

// More formally,

//     G[i] for an element A[i] = an element A[j] such that 
//     j is maximum possible AND 
//     j < i AND
//     A[j] < A[i]
// Elements for which no smaller element exist, consider next smaller element as -1.  Note :- Take all the required input from user.  Sample :- 
//  Input 1:
//     A = [4, 5, 2, 10, 8]
// Output 1:
//     G = [-1, 4, -1, 2, 2]
// Explaination 1:
//     index 1: No element less than 4 in left of 4, G[1] = -1
//     index 2: A[1] is only element less than A[2], G[2] = A[1]
//     index 3: No element less than 2 in left of 2, G[3] = -1
//     index 4: A[3] is nearest element which is less than A[4], G[4] = A[3]
//     index 4: A[3] is nearest element which is less than A[5], G[5] = A[3]

vector<int> q1(vector<int> nums) {
    int n = nums.size();
    vector<int> result(n);
    vector<int> lowestToLeft(n);

    int min = INT_MAX;
    for(int i = 0; i < n; ++i) {
        if(nums[i] < min) {
            min = nums[i];
        }
        lowestToLeft[i] = min;
    };

    for(int i = 0; i < n; ++i) {
        if(lowestToLeft[i] < nums[i]) {
            result[i] = lowestToLeft[i];
        }
        else {
            result[i] = -1;
        }
    }
    return result;

}
int main()
{
    vector<int> nums = {4, 5, 2, 10, 8};
    vector<int> result = q1(nums);
    for(int i : result) {
        cout << i << " ";
    }
    return 0;
}