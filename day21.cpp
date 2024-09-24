#include<iostream>
using namespace std;

// Ques 1: Write C++ program to create a doubly linkedlist and insert a node at any position .
class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) : data(val), next(nullptr), prev(nullptr) {}
};

Node* createDoublyLinkedList() {
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    if (n <= 0) return nullptr;

    Node* head = nullptr;
    Node* tail = nullptr;

    for (int i = 0; i < n; ++i) {
        int data;
        cout << "Enter data for node " << i + 1 << ": ";
        cin >> data;

        Node* newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    return head;
}

void insertAtPosition(Node*& head, int data, int position) {
    Node* newNode = new Node(data);
    if (position == 1) {
        newNode->next = head;
        if (head != nullptr) {
            head->prev = newNode;
        }
        head = newNode;
        return;
    }

    Node* temp = head;
    int count = 1;
    while(temp->next != nullptr && count < position - 1) {
        temp=temp->next;
    }
    if (temp->next != nullptr) {
        newNode->next = temp->next;
        temp->next->prev = newNode;
    }
    temp->next = newNode;
    newNode->prev = temp;
}


void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Ques 2: Write C++ program that detect the cycle inside a given linkedlist if their is any cycle present then print true otherwise print false.
bool isCyclic(Node* head) {
    Node* slow = head;
    Node* fast = head;
    while(fast!=nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) return true;
    }
    return false;
}


int main()
{
    Node* head = createDoublyLinkedList();
    printList(head);
    cout << isCyclic(head);
    return 0;
}