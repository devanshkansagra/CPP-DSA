/*
    Check the problem at: https://leetcode.com/problems/palindrome-linked-list/description/
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
        tail = head = temp;
    }
    else {
        ListNode* temp = new ListNode(data);
        tail->next = temp;
        tail = temp;
    }
}

ListNode* reverseList(ListNode* &head) {
    ListNode* previous = NULL;
    ListNode* curr = head;
    ListNode* nextNode;

    while(curr != NULL) {
        nextNode = curr->next;
        curr->next = previous;

        previous = curr;
        curr = nextNode;
    }

    return previous;
}

bool isPalindrome(ListNode* &head) {
    ListNode* temp = head;
    ListNode* reverseNode = reverseList(temp);
    ListNode* original = head;

    int sum1 = 0;
    int sum2 = 0;

    while(original != NULL && reverseNode != NULL) {
        sum1 = sum1 * 10 + original->val;
        sum2 = sum2 * 10 + reverseNode->val;

        original = original->next;
        reverseNode = reverseNode->next;
    }

    if(sum1 == sum2) {
        return true;
    }
    else {
        return false;
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
int main() {

    ListNode* n;
    ListNode* head = n;
    ListNode* tail = n;

    insert(head, tail, 1);
    insert(head, tail, 1);
    insert(head, tail, 2);
    insert(head, tail, 1);

    print(head);

    if(isPalindrome(head)) {
        cout << "Palindrome" << endl;
    }
    else {
        cout << "Not palindrome" << endl;
    }
    return 0;
}