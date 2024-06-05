/*
    Check the description at: https://leetcode.com/problems/linked-list-cycle/description/
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
    if(head == NULL) {
        ListNode* temp = new ListNode(data);
        head = tail = temp;
    }
    else {
        ListNode* temp = new ListNode(data);
        tail->next = temp;
        tail = temp;
    }
}

ListNode* detectCycle(ListNode* &head) {
    ListNode* slow = head;
    ListNode* fast = head;

    if(head == NULL || head->next == NULL) return NULL;

    while(fast != NULL && fast->next != NULL) {

        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast) return fast;
    }

    return head;
}

void print(ListNode* &head) {
    ListNode* temp = head;
    while(temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {

    ListNode* n;
    ListNode* head = n;
    ListNode* tail = n;

    insert(head, tail, 1);
    insert(head, tail, 2);
    insert(head, tail, 3);
    insert(head, tail, 4);

    tail->next = head->next;

    ListNode* cycle = detectCycle(head);
    cout << cycle->val << endl;
    return 0;
}