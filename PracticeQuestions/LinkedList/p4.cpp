/*
    Given the heads of two singly linked-lists headA and headB, retuen the node at which the two lists
    intersect. If the two linked lists have no intersection at all, eetuen null.
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

void print(ListNode* &head) {
    ListNode* temp = head;
    while(temp != NULL) {
        cout << temp->val << "->";
        temp = temp->next;
    }
    if(temp == NULL) {
        cout << "NULL";
    }
    cout << endl;
}

int getLength(ListNode* head) {
    ListNode* temp = head;
    int count = 0;
    while(temp != NULL) {
        count += 1;
        temp = temp->next;
    }
    return count;
}

ListNode* moveHead(ListNode* head, int length) {
    ListNode* temp = head;
    while(length--) {
        temp = temp->next;
    }
    return temp;
}

ListNode* intersect(ListNode* &head1, ListNode* &head2) {

    int l1 = getLength(head1);
    int l2 = getLength(head2);

    ListNode* temp1 = head1;
    ListNode* temp2 = head2;
    if(l1 > l2) {
        temp1 = moveHead(head1, l1 - l2);
    }
    else {
        temp2 = moveHead(head2, l2 - l1);
    }

    while(temp1 != NULL && temp2 != NULL) {
        if(temp1 == temp2) {
            return temp1;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return NULL;

}

int main() {

    ListNode* n;
    ListNode* head = n;
    ListNode* tail = n;

    ListNode* n1;
    ListNode* head1 = n1;
    ListNode* tail1 = n1;

    for(int i = 1; i <= 3; i += 1) {
        insert(head, tail, i);
    }
    
    insert(head1, tail1, 4);
    tail1->next = head->next;

    ListNode* temp = intersect(head, head1);
    if(temp == NULL) {
        cout << -1 << endl;
    }
    else {
        cout << temp->val << endl;
    }
    return 0;
}