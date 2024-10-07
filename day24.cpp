#include<iostream>
#include<vector>

using namespace std;

// Ques 1 . You are given a binary array. Your task is to find the maximum number of consecutive ones in array. 
//  Input :- arr :[1,1,0,1,1,1] 
//  Output: 3.
int maxOnes(vector<int> array) {
    
    int maxLength = 0;
    int curLength = 0;

    for(int i = 0; i < array.size(); ++i) {
        if(array[i] == 1) {
            curLength++;
        }
        else {
            curLength = 0;
        }
        if(curLength > maxLength) {
            maxLength = curLength;
        }
    }
    return maxLength;
}

int main()
{
    vector<int> binaryArray = {1,1,0,1,1,1};
    cout << maxOnes(binaryArray);
    return 0;
}