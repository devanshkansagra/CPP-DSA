/*
    Given the heads of two singly linked-lists headA and headB, return the node at which the two lists 
    intersect. If the two linked lists have no intersection at all, return null. 
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

ListNode* middle(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;

    while(fast != NULL || fast->next != NULL) {
        slow = slow->next;
        if(slow == fast) return slow;
        fast = fast->next->next;

    }
    return fast;
}

int main() {

    ListNode* head = NULL;
    ListNode* tail = NULL;

    for(int i = 1; i <= 5; i++) {
        insert(head, tail, i);
    }

    print(head);

    ListNode* middleNode = middle(head);
    cout << middleNode->val << endl;
    return 0;
}