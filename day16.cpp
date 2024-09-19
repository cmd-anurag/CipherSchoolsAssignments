#include<iostream>
using namespace std;

class Node {
    public:
    int val;
    Node* next;
    Node(int data) {
        val = data;
        next = nullptr;
    }
};

// Ques 1: Write a C++ code that take linked list from user input that is in sorted order and a value integer. Now insert the value inside linkedlist such that new likedlist is also in sorted order.
void question1(Node* &head, int data) {

    Node* newNode = new Node(data);

    if (head->val >= data) {
        newNode->next = head;
        head = newNode;
        return;
    }
    Node* current = head;
    while (current->next != nullptr && current->next->val < data) {
        current = current->next;
    }
    newNode->next = current->next;
    current->next = newNode;
}

int main()
{
    
    return 0;
}