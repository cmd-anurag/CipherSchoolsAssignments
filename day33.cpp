#include<iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

// Ques 1. Given a string s, sort it in decreasing order based on the frequency of the characters. The frequency of a character is the number of times it appears in the string.

// Return the sorted string. If there are multiple answers, return any of them.

// Input: s = "tree"
// Output: "eert"
// Explanation: 'e' appears twice while 'r' and 't' both appear once.
// So 'e' must appear before both 'r' and 't'. Therefore "eetr" is also a valid answer. Note :- Take all the required input from user.



string q1(string s) {
    unordered_map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }

    vector<pair<int, char>> freqVec;
    for (auto& it : freq) {
        freqVec.push_back({it.second, it.first});
    }

    sort(freqVec.rbegin(), freqVec.rend());

    string result;
    for (auto& it : freqVec) {
        result.append(it.first, it.second);
    }

    return result;
}

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;

    string sortedString = q1(s);
    cout << sortedString << endl;

    return 0;
}
