#include<bits/stdc++.h>
using namespace std;

class ListNode {
    public:
        int val;
        ListNode* next;

        ListNode(int val) {
            this->val = val;
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

void print(ListNode* &head) {
    ListNode* temp = head;
    while(temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
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
int main() {

    ListNode* n;
    ListNode* head = n;
    ListNode* tail = n;

    for(int i = 1; i <= 5; i++) {
        insert(head, tail, i);
    }

    print(head);

    ListNode* reverseNode = reverseList(head);
    print(reverseNode);
    return 0;
}