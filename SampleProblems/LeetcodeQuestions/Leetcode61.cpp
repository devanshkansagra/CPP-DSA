/*
    Check details at: https://leetcode.com/problems/rotate-list/description/
*/

#include<bits/stdc++.h>
using namespace std;

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

ListNode* rotate(ListNode* &head, int k) {
    
    ListNode* prev = NULL;
    ListNode* curr = head;

    while(k--) {
        if(head == NULL || head->next == NULL) {
            return head;
        }
        else {
            while(curr->next != NULL) {
                prev = curr;
                curr = curr->next;
            }
            curr->next = head;
            prev->next = NULL;
            head = curr;
        }
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

    ListNode* n;
    ListNode* head = n;
    ListNode* tail = n;

    // for(int i = 1; i <= 5; i++) {
    //     insert(head, tail, i);
    // }

    // print(head);

    ListNode* rotateList = rotate(head, 1);
    print(rotateList);

    // rotate(head);
    return 0;
}