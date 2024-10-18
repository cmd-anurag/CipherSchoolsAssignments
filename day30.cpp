#include <vector>
#include<iostream>
#include<unordered_map>
#include<stack>

using namespace std;

// Ques 1.   Write C++ program that take an array of size n from the user and the array contains both positive and negative number. Your task is to calculate the maximum sum of subarray. Print the maximum sum value.   
// Input : - n=9 array =-2,1,-3,4,-1,2,1,-5,4 
// Output:- 6
//  Explanation The subarray [4,-1,2,1] has the largest sum 6.

int maxSubArray(const vector<int>& nums) {
    int maxSum = nums[0];
    int currentSum = 0;

    for (int i = 0; i < nums.size(); ++i) {
        currentSum += nums[i];
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
        if (currentSum < 0) {
            currentSum = 0; 
        }
    }

    return maxSum;
}

// Ques 2. In an array, the next greater element for a given element x is defined as the first element to the right of x that is larger than x.

// You are provided with two distinct 0-indexed integer arrays, nums1 and nums2, where nums1 is a subset of nums2.

// For each element in nums1, find its corresponding position in nums2, and then identify the next greater element that appears to the right of it in nums2. If no such element exists, return -1 for that element.

// Your task is to return an array ans, where each element ans[i] represents the next greater element for nums1[i] as found in nums2. If no next greater element is found, the corresponding entry in ans should be -1.   Note all the required input from the user. 
//  Sample :- n1=3 , n2 =4 nums1 = [4,1,2], nums2 = [1,3,4,2]
//  Output :- [-1,3,-1].
//  Explanation :- The next greater element for each value of nums1 is as follows:
// - 4 is underlined in nums2 = [1,3,4,2]. There is no next greater element, so the answer is -1.
// - 1 is underlined in nums2 = [1,3,4,2]. The next greater element is 3.
// - 2 is underlined in nums2 = [1,3,4,2]. There is no next greater element, so the answer is -1.


vector<int> nextGreaterElement(const vector<int>& nums1, const vector<int>& nums2) {
    unordered_map<int, int> greaterMap;
    stack<int> s;
    
    for (int i = 0; i < nums2.size(); ++i) {
        while (!s.empty() && nums2[i] > s.top()) {
            greaterMap[s.top()] = nums2[i];
            s.pop();
        }
        s.push(nums2[i]);
    }

    vector<int> result;
    for (int num : nums1) {
        result.push_back(greaterMap.count(num) ? greaterMap[num] : -1);
    }

    return result;
}


int main() {
    // q1
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Maximum sum of subarray: " << maxSubArray(nums) << endl;
    
    // q2
    vector<int> nums1 = {4, 1, 2};
    vector<int> nums2 = {1, 3, 4, 2};

    vector<int> result = nextGreaterElement(nums1, nums2);
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
