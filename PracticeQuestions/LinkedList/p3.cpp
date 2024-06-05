/*
    Peoblem 1: Given 2 linked lists, Tell if they aee equal oe not. Two linked lists aee equal if they have the same
    data and the arrangement of data is also the same.
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

bool checkEquality(ListNode* &head1, ListNode* &head2) {
    ListNode* temp1 = head1;
    ListNode* temp2 = head2;

    int trueCount = 0;
    int count = 0;
    while(temp1 != NULL && temp2 != NULL) {
        if(temp1->val == temp2->val) {
            trueCount += 1;
        }
        count += 1;
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    if(trueCount == count) {
        return true;
    }
    
    return false;

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

int main() {

    ListNode* n;
    ListNode* head = n;
    ListNode* tail = n;

    ListNode* n1;
    ListNode* head1 = n1;
    ListNode* tail1 = n1;

    for(int i = 1; i <= 5; i += 1) {
        insert(head, tail, i);
    }
    for(int i = 1; i <= 5; i += 1) {
        insert(head1, tail1, i);
    }

    cout << "First linked list: ";
    print(head);

    cout << "Second Linked List: ";
    print(head1);

    if(checkEquality(head, head1)) {
        cout << true << endl;
    }
    else {
        cout << false << endl;
    }

    return 0;
}