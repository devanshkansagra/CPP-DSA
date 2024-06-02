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
    int left, right = 0;
    ListNode *temp = head;
    while (temp != NULL) {
        temp = temp->next;
        right += 1;
    }

    int mid = left + (right - left) / 2;
    int count = 0;
    temp = head;
    while (count < mid) {
        temp = temp->next;
        count += 1;
    }
    return temp;
}

ListNode *deleteMiddle(ListNode *head) {
    ListNode *middleEle = middleNode(head);
    ListNode *curr = head;

    while (curr->next != middleEle) {
        curr = curr->next;
    }

    curr->next = middleEle->next;
    middleEle->next = NULL;
    delete middleEle;

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

    for (int i = 1; i <= 5; i++)
    {
        insertAtTail(head, tail, i);
    }

    print(head);
    deleteMiddle(head);
    print(head);
    return 0;
}