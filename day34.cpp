#include<iostream>
using namespace std;

// Ques 1. Given the head of a singly linked list, group all the nodes with odd indices together followed by the nodes with even indices, and return the reordered list.

// The first node is considered odd, and the second node is even, and so on.

// Note that the relative order inside both the even and odd groups should remain as it was in the input.

// You must solve the problem in O(1) extra space complexity and O(n) time complexity.

// Input: head = [1,2,3,4,5]
// Output: [1,3,5,2,4].   Note :- Take all the required input from user. 

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* oddEvenList(ListNode* head) {
    if (!head) return head;

    ListNode* odd = head;
    ListNode* even = head->next;
    ListNode* evenHead = even;

    while (even && even->next) {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }

    odd->next = evenHead;
    return head;
}

void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

ListNode* createList() {
    int n, val;
    cout << "Enter the number of nodes: ";
    cin >> n;
    if (n <= 0) return NULL;

    cout << "Enter the value of node 1: ";
    cin >> val;
    ListNode* head = new ListNode(val);
    ListNode* current = head;

    for (int i = 2; i <= n; ++i) {
        cout << "Enter the value of node " << i << ": ";
        cin >> val;
        current->next = new ListNode(val);
        current = current->next;
    }

    return head;
}

int main() {
    ListNode* head = createList();

    head = oddEvenList(head);
    cout << "Reordered list: ";
    printList(head);

    return 0;
}
