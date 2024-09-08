#include <iostream>

using namespace std;

// Ques 1: Write a function int findMax(const int arr[], int size) that finds and returns the maximum value in an integer array. Test your function with various arrays in the main() function.
int findMax(const int arr[], int size) {
    int max = INT32_MIN;
    for(int i = 0; i < size; ++i) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Ques 2: Write a function bool isPalindrome(const std::string &str) that checks whether a given string is a palindrome (a word, phrase, or sequence that reads the same backward as forward). The function should ignore spaces, punctuation, and case sensitivity. Test your function with various strings in the main() function.
bool isPalindrome(const string &str) {
    int left = 0;
    int right = str.length() - 1;
    while(left < right) {
        if(str[left] != str[right]) return false;
        left++;
        right--;
    }
    return true;
}

int main() {
    int array[] = {1, 5, 3, 9, 2};
    cout << findMax(array, 5) << '\n';
    string str = "redivider";
    cout << isPalindrome(str);
}