#include<iostream>
#include <fstream>
#include<string>
using namespace std;

// Ques 1: Write a C++ program that take txt file input and write your details inside that file through c++ and then print this details.
void q1() {
    ofstream file("day19q1.txt", ios::app);
    if(file.fail()) {
        cout << "Error opening file";
        return;
    }
    file << "Anurag Kumar\n";
    file << "School of Computer Science\n";
    file << "Bachelor of Technology";
    file.close();

    ifstream readfile("day19q1.txt");
    if(readfile.fail()) {
        cout << "error opening file";
        return;
    }
    string line;
    while(getline(readfile, line)) {
        cout << line << '\n';
    }
    readfile.close();
}

// Ques 2:  Write C++ program that take input from the txt file and then print output inside terminal. Take any txt file by yourself.
void q2() {
    ifstream file("day19q2.txt");
    if(file.fail()) {
        cout << "error opening file";
        return;
    }
    string line;
    while(!file.eof()) {
        getline(file, line);
        cout << line << '\n';
    }
    file.close();
}

int main()
{
    q1();
    q2();
    return 0;
}