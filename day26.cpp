#include<iostream>
using namespace std;

// Ques 1. Implement the priority queue using array. 
class PriorityQueue {
private:
    
    int elements[100];
    int priorities[100];
    int size;

public:
    PriorityQueue() : size(0) {}

    void push(int element, int priority) {
        if (size >= 100) {
            cout << "Queue overflow" << endl;
            return;
        }
        int i;
        for (i = size - 1; i >= 0 && priorities[i] > priority; i--) {
            elements[i + 1] = elements[i];
            priorities[i + 1] = priorities[i];
        }
        elements[i + 1] = element;
        priorities[i + 1] = priority;
        size++;
    }

    void pop() {
        if (size > 0) {
            size--;
        } else {
            cout << "Queue is empty" << endl;
        }
    }

    int top() {
        if (size > 0) {
            return elements[size - 1];
        } else {
            cout << "Queue is empty" << endl;
            return -1;
        }
    }

    bool empty() {
        return size == 0;
    }
};

int main() {
    PriorityQueue q1;
    q1.push(4, 6);
    q1.push(10, 2);
    q1.push(1, 3);
    q1.push(3, 5);
    q1.push(8, 1);
    q1.push(2, 9);
    cout << q1.top() << "\n";
    q1.pop();
    cout << q1.top();
    return 0;
}