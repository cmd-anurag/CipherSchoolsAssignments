#include<iostream>
#include <stack>
#include <cctype>

using namespace std;

// Ques 1.  Given an infix expression in the form of string str. Convert this infix expression to postfix expression.

int precedence(char op) {
    if(op == '+'|| op == '-') return 1;
    if(op == '*'|| op == '/') return 2;
    if(op == '^') return 3;
    return 0;
}

string infixToPostfix(string s) {
    stack<char> st;
    string result;
    
    for(char& c : s) {
        if(isalnum(c)) {
            result += c;
        } else if(c == '(') {
            st.push(c);
        } else if(c == ')') {
            while(!st.empty() && st.top() != '(') {
                result += st.top();
                st.pop();
            }
            st.pop();
        } else {
            while(!st.empty() && precedence(st.top()) >= precedence(c)) {
                result += st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    
    while(!st.empty()) {
        result += st.top();
        st.pop();
    }
    
    return result;
}

int main()
{
    string infix = "a+b*(c^d-e)^(f+g*h)-i";
    string postfix = infixToPostfix(infix);
    cout << postfix;
    return 0;
}