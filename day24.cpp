#include<iostream>
#include<vector>


using namespace std;

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