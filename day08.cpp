#include <iostream>
using namespace std;
// Ques 1: Write a function int stringLength(const std::string &str) that returns the length of a given string. Test your function with various strings in the main() function.
int stringLength(const string &str) {
    int length = 0;
    for(char c : str) {
        ++length;
    }
    return length;
}

// Ques 2: Implement a function int countCharacter(const std::string &str, char ch) that counts the number of occurrences of a specific character in a given string. Test the function with different strings and characters.
int countCharacter(const string &str, char ch) {
    int count = 0;
    for(char c : str) {
        if(c==ch) {
            ++count;
        }
    }
    return count;
}

// Ques 3:   Write a function std::string concatenateStrings(const std::string &str1, const std::string &str2) that concatenates two strings and returns the result. Test the function with various input strings.
string concatenateStrings(const string &str1, const string &str2) {
    string output = str1+str2;
    return output;
}




int main() {
    string str1 = "Hello, World!";
    string str2 = "This is a string";
    string str3 = "Visual Studio Code";

    cout << stringLength(str1) << endl;
    cout << stringLength(str2) << endl;
    cout << stringLength(str3) << endl;

    cout << countCharacter(str1, 'l') << endl;
    cout << countCharacter(str2, 'i') << endl;
    cout << countCharacter(str3, 'o') << endl;

    cout << concatenateStrings(str1, str2) << endl;
    cout << concatenateStrings(str2, str3) << endl;
    cout << concatenateStrings(str1, str3) << endl;
}