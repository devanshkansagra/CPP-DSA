/*
    Given 2 sorted linked lists, merge them into 1 singly linked list such that the resulting list is also
    sorted.
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

ListNode* mergeLists(ListNode* &list1, ListNode* &list2) {
    ListNode* curr1 = list1;
    ListNode* curr2 = list2;

    // ListNode* temp;
    ListNode* head3 = NULL;
    ListNode* tail3 = NULL;

    while(curr1 != NULL && curr2 != NULL) {
        if(curr1->val <= curr2->val) {
            insert(head3, tail3, curr1->val);
            curr1 = curr1->next;
        }
        else {
            insert(head3, tail3, curr2->val);
            curr2 = curr2->next;
        }
    }

     while (curr1 != NULL) {
        insert(head3, tail3, curr1->val);
        curr1 = curr1->next;
    }

    while (curr2 != NULL) {
        insert(head3, tail3, curr2->val);
        curr2 = curr2->next;
    }

    return head3;
}

int main() {

    ListNode* n1 = NULL;
    ListNode* head1 = n1;
    ListNode* tail1 = n1;

    insert(head1, tail1, -9);
    insert(head1, tail1, 3);
    

    ListNode* n2 = NULL;
    ListNode* head2 = n2;
    ListNode* tail2 = n2;

    insert(head2, tail2, 5);
    insert(head2, tail2, 7);

    cout << "List 1: ";
    print(head1);

    cout << "List 2: ";
    print(head2);

    ListNode* merged = mergeLists(head1, head2);
    cout << "Merged List: ";
    print(merged);
    return 0;
}