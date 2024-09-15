#include <iostream>

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

// Ques 1 : Write a function void printLinkedList(Node* head) that traverses a singly linked list and prints each element's value.
void printLinkedList(Node* head) {
    Node* currentNode = head;
    while (currentNode != nullptr) 
    {
        cout << currentNode->val << " ";
        currentNode = currentNode->next;
    }
    cout << "\n";
}

// Ques 2: Write a function void insertAtEnd(Node*& head, int data) that inserts a new node with the given data at the end of a singly linked list. 
void insertAtEnd(Node*& head, int data) {
    Node* newNode = new Node(data);
    if(head == nullptr) {
        head = newNode;
    }
    else {
        Node* current = head;
        while(current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
}

int main() {

}