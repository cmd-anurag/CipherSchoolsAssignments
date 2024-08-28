#include <iostream>
#include <string>

using namespace std;

// Ques-01  Write a C++ function that checks whether an integer is odd or even. If the integer is odd, print "Odd"; otherwise, print "Even."
void isEvenOrOdd(int n) {
    if(n%2==0) {
        cout << "Even";
    }
    else {
        cout << "Odd";
    }
    cout << endl;
}

// Ques-02   Write a C++ function that takes a string as input and reverses it.

void swap(char *c1, char *c2) {
    char temp = *c1;
    *c1 = *c2;
    *c2 = temp;
}
void reverseString(string s) {
    int p1 = 0;
    int p2 = s.length() - 1;

    while(p1 < p2) {
        swap(&s[p1], &s[p2]);
        ++p1;
        --p2;
    }
    cout << "Reversed string: " << s << endl;
}

// Ques-03   Write a C++ function that takes a string as a parameter and checks how many vowels and consonants are in that string.
// Assuming that string contains only lowercase. 

void countVowelsAndConsonants(string s) {
    int vowelCount = 0;
    int consonantCount = 0;
    for(char c : s) {
        switch (c) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                ++vowelCount;
                break;
            default:
                ++consonantCount;
                break;
        }
    }
    cout << "Number of vowels: " << vowelCount << endl;
    cout << "Number of consonants: " << consonantCount << endl;

}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    isEvenOrOdd(n);
    string s;
    cout << "Enter a string: ";
    cin >> s;
    reverseString(s);
    cout << "Enter a string: ";
    cin >> s;
    countVowelsAndConsonants(s);
}

