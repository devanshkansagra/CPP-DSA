/*
    Check the question details on: https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/description/
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

void insertAtHead(ListNode* &head, int data) {
    if(head == NULL) {
        ListNode* temp = new ListNode(data);
        head = temp;
    }
    else {
        ListNode* temp = new ListNode(data);
        temp->next = head;
        head = temp;
    }
}

ListNode* reverseLinkedList(ListNode* &head) {
    ListNode* temp = head;
    ListNode* head1 = NULL;
    while(temp != NULL) {
        insertAtHead(head1, temp->val);
        temp = temp->next;
    }   
    return head1;
}

void insertAtTail(ListNode* &head, ListNode* &tail, int data) {
    if(tail == NULL) {
        ListNode* temp = new ListNode(data);
        tail = head = temp;
    }
    else {
        ListNode* temp = new ListNode(data);
        tail->next = temp;
        tail = temp;
    }
}

int getDecimalValue(ListNode* &head) {
    int sum = 0;
    ListNode* temp = reverseLinkedList(head);
    int i = 0;
    while(temp != NULL) {
        sum += pow(2, i) * temp->val;
        temp = temp->next;
        i += 1;
    }

    return sum;
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

    insertAtTail(head, tail, 1);
    insertAtTail(head, tail, 0);
    insertAtTail(head, tail, 0);
    insertAtTail(head, tail, 1);
    insertAtTail(head, tail, 0);
    insertAtTail(head, tail, 0);
    insertAtTail(head, tail, 1);
    insertAtTail(head, tail, 1);
    insertAtTail(head, tail, 1);
    insertAtTail(head, tail, 0);
    insertAtTail(head, tail, 0);
    insertAtTail(head, tail, 0);
    insertAtTail(head, tail, 0);
    insertAtTail(head, tail, 0);
    insertAtTail(head, tail, 0);

    print(head);

    int binaryVal = getDecimalValue(head);
    cout << binaryVal << endl;
    return 0;
}