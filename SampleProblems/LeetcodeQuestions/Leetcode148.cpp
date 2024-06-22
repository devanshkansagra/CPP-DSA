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
void insert(ListNode *&head, ListNode *&tail, int data)
{
    ListNode *temp;
    if (head == NULL)
    {
        temp = new ListNode(data);
        head = tail = temp;
    }
    else
    {
        temp = new ListNode(data);
        tail->next = temp;
        tail = temp;
    }
}
ListNode *sortList(ListNode *head)
{
    vector<int> listVector;
    ListNode *temp = head;
    ListNode *newHead = NULL;
    ListNode *newTail = NULL;
    while (temp != NULL)
    {
        listVector.push_back(temp->val);
        temp = temp->next;
    }

    sort(listVector.begin(), listVector.end());

    for (int i = 0; i < listVector.size(); i++)
    {
        insert(newHead, newTail, listVector[i]);
    }

    return newHead;
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
int main()
{

    ListNode *head = NULL;
    ListNode *tail = NULL;

    insert(head, tail, 4);
    insert(head, tail, 2);
    insert(head, tail, 1);
    insert(head, tail, 3);

    print(head);
    ListNode *newList = sortList(head);
    print(newList);
}

/*
    Solution 2:
    class Solution {
        public:
            ListNode* sortList(ListNode* head) {
                if (!head || !head->next) {
                    return head;
                }

                ListNode* mid = getMiddle(head);
                ListNode* nextToMid = mid->next;
                mid->next = nullptr;

                ListNode* left = sortList(head);
                ListNode* right = sortList(nextToMid);

                return merge(left, right);
            }

        private:
            ListNode* getMiddle(ListNode* head) {
                if (!head) return head;
                ListNode* slow = head;
                ListNode* fast = head->next;

                while (fast && fast->next) {
                    slow = slow->next;
                    fast = fast->next->next;
                }

                return slow;
            }

            ListNode* merge(ListNode* l1, ListNode* l2) {
                ListNode dummy(0);
                ListNode* current = &dummy;

                while (l1 && l2) {
                    if (l1->val < l2->val) {
                        current->next = l1;
                        l1 = l1->next;
                    } else {
                        current->next = l2;
                        l2 = l2->next;
                    }
                    current = current->next;
                }

                if (l1) current->next = l1;
                if (l2) current->next = l2;

                return dummy.next;
            }
    };
*/