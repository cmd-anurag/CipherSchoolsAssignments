#include <iostream>
using namespace std;

int findLargestNumber(int num1, int num2, int num3) {
    if (num1 >= num2 && num1 >= num3) {
        return num1;
    } else if (num2 >= num1 && num2 >= num3) {
        return num2;
    } else {
        return num3;
    }
}
void findGrade(int score) {
    if (score >= 90 && score <= 100) {
        cout << "Grade: A" << endl;
    } else if (score >= 80 && score <= 89) {
        cout << "Grade: B" << endl;
    } else if (score >= 70 && score <= 79) {
        cout << "Grade: C" << endl;
    } else if (score >= 60 && score <= 69) {
        cout << "Grade: D" << endl;
    } else if (score >= 0 && score <= 59) {
        cout << "Grade: F" << endl;
    } else {
        cout << "Invalid score" << endl;
    }
}

void findMonth(int month) {
    switch (month) {
        case 1:
            cout << "The month is: January" << endl;
            break;
        case 2:
            cout << "The month is: February" << endl;
            break;
        case 3:
            cout << "The month is: March" << endl;
            break;
        case 4:
            cout << "The month is: April" << endl;
            break;
        case 5:
            cout << "The month is: May" << endl;
            break;
        case 6:
            cout << "The month is: June" << endl;
            break;
        case 7:
            cout << "The month is: July" << endl;
            break;
        case 8:
            cout << "The month is: August" << endl;
            break;
        case 9:
            cout << "The month is: September" << endl;
            break;
        case 10:
            cout << "The month is: October" << endl;
            break;
        case 11:
            cout << "The month is: November" << endl;
            break;
        case 12:
            cout << "The month is: December" << endl;
            break;
        default:
            cout << "Invalid input" << endl;
            break;
    }
}

int main() {
    int num1, num2, num3;
    
    cout << "Enter the first number: ";
    cin >> num1;
    
    cout << "Enter the second number: ";
    cin >> num2;
    
    cout << "Enter the third number: ";
    cin >> num3;
    
    int largest = findLargestNumber(num1, num2, num3);
    cout << "The largest number is: " << largest << endl;


    int score;
    cout << "Enter the score: ";
    cin >> score;
    findGrade(score);


    int month;
    cout << "Enter a number: ";
    cin >> month;
    findMonth(month);
    
    return 0;
}