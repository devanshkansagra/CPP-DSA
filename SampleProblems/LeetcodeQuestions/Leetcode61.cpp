/*
    Check details at: https://leetcode.com/problems/rotate-list/description/
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

ListNode* rotate(ListNode* &head, int k) {
    if(head == NULL) return head;
    else {
        int length = 1;
        ListNode* tail = head;

        while(tail->next != NULL) {
            tail = tail->next;
            length += 1;
        }

        k = k % length; // if k == length
        ListNode* curr = head;
        int i = 0;
        int range = length - k - 1;
        while(range--) {
            curr = curr->next;
        }

        tail->next = head;
        head = curr->next;
        curr->next = NULL;
        return head;
    }
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

    ListNode* n;
    ListNode* head = n;
    ListNode* tail = n;

    for(int i = 1; i <= 5; i++) {
        insert(head, tail, i);
    }

    print(head);

    ListNode* rotateList = rotate(head, 2);
    print(rotateList);

    // rotate(head);
    return 0;
}