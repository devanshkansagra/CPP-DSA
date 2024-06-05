/*
    Check the description at: https://leetcode.com/problems/remove-linked-list-elements/
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

        ~ListNode() {}
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

void print(ListNode* &head) {
    ListNode* temp = head;
    while(temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

ListNode* removeElements(ListNode* &head, int val) {
    if(head->val == val) {
        delete head;
        return NULL;
    }
    else {
        ListNode* prev = NULL;
        ListNode* curr = head;
        while(curr != NULL) {
            if(curr->val == val) {
                ListNode* temp = curr;
                delete temp;
                return head;
            }
            prev = curr;
            curr = curr->next;
        }
    }
    return head;
}

int main() {

    ListNode* n;
    ListNode* head = n;
    ListNode* tail = n;

    for(int i = 1; i <= 5; i++) {
        insert(head, tail, i);
    }

    print(head);

    ListNode* modified = removeElements(head, 4);
    print(modified);
    return 0;
}