#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Ques - 01 - Write a C++ program that takes two strings as input from the user and concatenates them. Then, output the concatenated string.

void concatenateString(string s1, string s2) {
    string result = s1 + s2;
    cout << "Concatenated string: " << result << endl;
}

// Ques-02 - Write a C++ program that takes five grades (integers) as input from the user and calculates the average grade. Output the average grade to the user.
double findAverageGrade(int g1, int g2, int g3, int g4, int g5) {
    return (g1+g2+g3+g4+g5)/5.0;
}

// Ques-03 - Write a C++ program that takes an integer as input from the user and outputs its square.
unsigned int findSquare(int n) {
    return n*n;
}

int main() {
    string s1, s2;
    cout << "Enter the first string: ";
    getline(cin, s1);
    cout << "Enter the second string: ";
    getline(cin, s2);
    concatenateString(s1, s2);

    int g1, g2, g3, g4, g5;

    cout << "Enter Grade 1: ";
    cin >> g1;
    cout << "Enter Grade 2: ";
    cin >> g2;
    cout << "Enter Grade 3: ";
    cin >> g3;
    cout << "Enter Grade 4: ";
    cin >> g4;
    cout << "Enter Grade 5: ";
    cin >> g5;
    double average = findAverageGrade(g1, g2, g3, g4, g5);
    cout << "The average grade is: " << fixed << setprecision(4) << average << endl;
    
    int n;
    cout << "Enter a number: ";
    cin >> n;
    unsigned int square = findSquare(n);
    cout << "The square of " << n << " is " << square << endl;

}