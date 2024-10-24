#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Ques 1. Turtle and Piggy are playing a game on a sequence. They are given a sequence 𝑎1,𝑎2,…,𝑎𝑛, and Turtle goes first. Turtle and Piggy alternate in turns (so, Turtle does the first turn, Piggy does the second, Turtle does the third, etc.).

// The game goes as follows:

// Let the current length of the sequence be 𝑚. If 𝑚=1, the game ends.
// If the game does not end and it's Turtle's turn, then Turtle must choose an integer 𝑖 such that 1≤𝑖≤𝑚−1, set 𝑎𝑖 to max(𝑎𝑖,𝑎𝑖+1), and remove 𝑎𝑖+1.
// If the game does not end and it's Piggy's turn, then Piggy must choose an integer 𝑖 such that 1≤𝑖≤𝑚−1, set 𝑎𝑖 to min(𝑎𝑖,𝑎𝑖+1), and remove 𝑎𝑖+1.
// Turtle wants to maximize the value of 𝑎1 in the end, while Piggy wants to minimize the value of 𝑎1 in the end. Find the value of 𝑎1 in the end if both players play optimally.     Each test contains multiple test cases. The first line contains the number of test cases 𝑡 (1≤𝑡≤104). The description of the test cases follows.

// The first line of each test case contains a single integer 𝑛 (2≤𝑛≤105) — the length of the sequence.

// The second line of each test case contains 𝑛 integers 𝑎1,𝑎2,…,𝑎𝑛 (1≤𝑎𝑖≤105) — the elements of the sequence 𝑎.

// It is guaranteed that the sum of 𝑛 over all test cases does not exceed 105.

// Output
// For each test case, output a single integer — the value of 𝑎1 in the end if both players play optimally.      
// Input :- 5
// 2
// 1 2
// 3
// 1 1 2
// 3
// 1 2 3
// 5
// 3 1 2 2 3
// 10
// 10 2 5 2 7 9 2 5 10 7

// Output:- 2
// 1
// 2
// 2
// 7


int q1(std::vector<int>& a) {
    int n = a.size();
    for (int i = n - 1; i > 0; --i) {
        if (i % 2 == 1) {
            a[i - 1] = std::max(a[i - 1], a[i]);
        } else {
            a[i - 1] = std::min(a[i - 1], a[i]);
        }
    }
    return a[0];
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        std::vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        cout << q1(a) << endl;
    }
    return 0;
}
