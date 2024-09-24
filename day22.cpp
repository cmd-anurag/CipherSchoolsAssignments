#include<iostream>
using namespace std;

// Ques 1: Write C++ program that create a stack using Array.

class Stack {
    int top;
    int size;
    int *stack;

    public:
    Stack(int s) {
        this->top = -1;
        this->size = s;
        this->stack = new int[size];
    }

    ~Stack() {
        delete[] stack;
    }

    void push(int data) {
        if(top >= size - 1) {
            cout << "Stack Overflow\n";
            return;
        }
        ++top;
        stack[top] = data;
        cout << data << " was pushed\n";
    }

    int pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return -1;
        }
        return stack[top--];
    }

    int peek() {
        return stack[top];
    }
    
};

//  Ques 2 : Write C++ program that take n from the user the number of elements and insert all the value inside stack after inserting all value inside stack pop all the values and print.
void q2() {
    int n;
    cout << "Enter the size of stack ";
    cin >> n;
    Stack myStack(n);
    int value;
    for (int i = 0; i < n; ++i) {
        cin >> value;
        myStack.push(value);
    }
    cout << "Popping all values:\n";
    while (true) {
        int poppedValue = myStack.pop();
        if (poppedValue == -1) break;
        cout << poppedValue << " was popped\n";
    }
}

int main()
{
    Stack myStack(5);
    myStack.push(4);
    myStack.push(3);
    myStack.push(1);
    myStack.push(2);
    myStack.push(12);
    myStack.push(15);
    cout << "Top element is " << myStack.peek() << endl;
    cout << myStack.pop() << " was popped\n";
    cout << myStack.pop() << " was popped\n";
    cout << "Top element is " << myStack.peek() << endl;
    cout << myStack.pop() << " was popped\n";
    cout << myStack.pop() << " was popped\n";
    cout << myStack.pop() << " was popped\n";
    myStack.pop();
    
    
    q2();
    return 0;
}