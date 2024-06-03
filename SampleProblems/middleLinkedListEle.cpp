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
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void middle(ListNode* &head) {
    ListNode* slow = head;
    ListNode* fast = head;

    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        
    }

    cout << slow->val << endl;

}

// 1 2 3 4 5
int main() {

    ListNode* n;
    ListNode* head = n;
    ListNode* tail = n;

    for(int i = 1; i <= 5; i++) {
        insert(head, tail, i);
    }

    print(head);

    middle(head);
    // cout << middleEle << endl;
    return 0;
}