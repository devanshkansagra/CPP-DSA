/*
    Check the description at: https://leetcode.com/problems/add-two-numbers-ii/description/
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
        tail = head = temp;
    }
    else {
        ListNode* temp = new ListNode(data);
        tail->next = temp;
        tail = temp;
    }
}

void insertHead(ListNode* &head, int data) {
    
    ListNode* newNode = NULL;
    if(head == NULL) {
        newNode = new ListNode(data);
        head = newNode;
    }
    else {
        newNode = new ListNode(data);
        newNode->next = head;
        head = newNode;
    }

}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    stack <int> st1, st2;

    while(l1 != NULL) {
        st1.push(l1->val);
        l1 = l1->next;
    }

    while(l2 != NULL) {
        st2.push(l2->val);
        l2 = l2->next;
    }

    int sum = 0, carry = 0;
    ListNode* head = NULL;

    while(!st1.empty() && !st2.empty()) {

        sum = (st1.top() % 10) + (st2.top() % 10) + carry;
        if(sum >= 10) {
            carry = 1;
            insertHead(head, sum%10);
        }
        else {
            carry = 0;
            insertHead(head, sum);
        }
        st1.pop();
        st2.pop();
    }

    while(!st1.empty()) {
        sum = carry + st1.top();
        if(sum >= 10) {
            carry = 1;
            insertHead(head, sum % 10);
        }
        else {
            carry = 0;
            insertHead(head, sum);
        }
        st1.pop();
    }
    while(!st2.empty()) {
        sum = carry + st2.top();
        if(sum >= 10) {
            carry = 1;
            insertHead(head, sum % 10);
        }
        else {
            carry = 0;
            insertHead(head, sum);
        }
        st2.pop();
    }

    if(carry) {
        insertHead(head, carry);
    }

    return head;
}

void print(ListNode *&head)
{
    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {

    ListNode* head1 = NULL;
    ListNode* tail1 = NULL;

    insert(head1, tail1, 7);
    insert(head1, tail1, 2);
    insert(head1, tail1, 4);
    insert(head1, tail1, 3);

    print(head1);

    ListNode* head2 = NULL;
    ListNode* tail2 = NULL;

    insert(head2, tail2, 5);
    insert(head2, tail2, 6);
    insert(head2, tail2, 4);
    print(head2);

    ListNode* sum = addTwoNumbers(head1, head2);
    print(sum);
    return 0;

}