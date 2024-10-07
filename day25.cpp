#include<iostream>
#include<vector>
using namespace std;

// Ques 1. Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
int findSingle(vector<int> &array) {
    int xorsum = 0;
    for(int i = 0; i < array.size(); ++i) {
        xorsum ^= array.at(i);
    }
    if(xorsum != 0) {
        return xorsum;
    }
    else {
        cout << "All elements appear twice";
        return -1;
    }
}

// Ques 2. Implement the stack using linkedlist. 
class Node {
public:
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class Stack {
private:
    Node* top;
public:
    Stack() : top(nullptr) {}

    void push(int val) {
        Node* newNode = new Node(val);
        newNode->next = top;
        top = newNode;
    }

    void pop() {
        if (top == nullptr) {
            cout << "Stack Underflow" << endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    int peek() {
        if (top == nullptr) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return top->data;
    }

    bool isEmpty() {
        return top == nullptr;
    }

    ~Stack() {
        while (top != nullptr) {
            pop();
        }
    }
};

int main()
{
    vector<int> array = {3,2,4,2,1,1,3};
    cout << findSingle(array) << "\n";
    Stack myStack;
    cout << myStack.isEmpty() << "\n";
    myStack.push(14);
    myStack.push(12);
    myStack.push(10);
    cout << myStack.peek() << "\n";
    myStack.pop();
    cout << myStack.peek() << "\n";
}