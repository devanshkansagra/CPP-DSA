/*
    Check the question at: https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/
*/

#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;

    ListNode(int data)
    {
        this->val = data;
        this->next = NULL;
    }
};

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

ListNode *middleNode(ListNode *head) {
    ListNode* slow = head;
    ListNode* fast = head;

    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

    }
    return slow;
}

ListNode* deleteMiddle(ListNode* head) {
    ListNode* temp = head;
    ListNode* slow = head;
    ListNode* fast = head;

    if(head->next == NULL) {
        head = NULL;
        return head;
    }
    while(fast != NULL && fast->next != NULL) {
        temp = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    temp->next = slow->next;
    slow = NULL;
    return head;
}

void insertAtTail(ListNode *&head, ListNode *&tail, int data)
{
    if (head == NULL)
    {
        ListNode *temp = new ListNode(data);
        tail = head = temp;
    }
    else
    {
        ListNode *temp = new ListNode(data);
        tail->next = temp;
        tail = temp;
    }
}

int main()
{

    ListNode *n;
    ListNode *head = n;
    ListNode *tail = n;

    insertAtTail(head, tail, 1);

    print(head);
    deleteMiddle(head);
    print(head);
    return 0;
}