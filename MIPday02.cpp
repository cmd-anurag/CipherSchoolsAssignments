// Ques 2 . Given an array arr[] of n integers where arr[i] represents the number of chocolates in ith packet. Each packet can have a variable number of chocolates. There are m students, the task is to distribute chocolate packets such that: 

// Each student gets exactly one packet.
// The difference between the maximum and minimum number of chocolates in the packets given to the students is minimized.

// Sample:- 
// Input: arr[] = {7, 3, 2, 4, 9, 12, 56}, m = 3 
// Output: 2 
// Explanation: If we distribute chocolate packets {3, 2, 4}, we will get the minimum difference, that is 2. 

// Input: arr[] = {7, 3, 2, 4, 9, 12, 56}, m = 5 
// Output: 7
// Explanation: If we distribute chocolate packets {3, 2, 4, 9, 7}, we will get the minimum difference, that is 9 – 2 = 7. 


#include <bits/stdc++.h> 
using namespace std;


int findMinDiff(int n, int m, vector<int> chocolates) {
    
    sort(chocolates.begin(), chocolates.end());

    int i = 0;
    int j = i+m-1;

    int diff = chocolates[j] - chocolates[i];

    while(j < n) {
        diff = min(diff, chocolates[j] - chocolates[i]);
        ++i;
        ++j;
    }
    return diff;

}

int main() {
    vector<int> chocolates = {7, 3, 2, 4, 9, 12, 56};
    int m = 3;
    int n = chocolates.size();

    int result = findMinDiff(n, m, chocolates);
    cout << "Minimum difference is " << result << endl;

    chocolates = {7, 3, 2, 4, 9, 12, 56};
    m = 5;
    result = findMinDiff(n, m, chocolates);
    cout << "Minimum difference is " << result << endl;

    return 0;
}