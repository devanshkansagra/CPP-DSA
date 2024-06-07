/*
    Given head, the head of a linked list. Return true if the linked list has a cycle in it, otherwise return false.
*/

#include<bits/stdc++.h>
using namespace std;

class ListNode {
    public:
        int val;
        ListNode* next;

        ListNode(int data) {
            this->val = data;
            this->next = NULL;
        }
};

void insert(ListNode* &head, ListNode* &tail, int data) {
    ListNode* newNode = new ListNode(data);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

void print(ListNode* &head) {
    ListNode* temp = head;
    while(temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

bool detectCycle(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;

    if(head == NULL || head->next == NULL) return false;

    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast) return true;
    }

    return false;
}
int main() {

    ListNode* head = NULL;
    ListNode* tail = NULL;

    for(int i = 1; i <= 5; i++) {
        insert(head, tail, i);
    }
    print(head);

    tail->next = head;

    if(detectCycle(head)) {
        cout << true << endl;
    }
    else {
        cout << false << endl;
    }
}