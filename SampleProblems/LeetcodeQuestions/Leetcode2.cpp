// /*
//     Check the description at: https://leetcode.com/problems/add-two-numbers/description/
// */

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



ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    int carry = 0;
    ListNode* head = NULL;
    ListNode* tail = NULL;
    int sum;
    while(l1 != NULL && l2 != NULL) {
        sum = (l1->val % 10) + (l2->val % 10) + carry;
        if(sum >= 10) {
            carry = 1;
            insert(head, tail, sum % 10);
        }
        else {
            carry = 0;
            insert(head, tail, sum);
        }
        l1 = l1->next;
        l2 = l2->next;
        sum = 0;
    }

    while(l2 != NULL) {
        sum = carry + (l2->val % 10);
        if(sum >= 10) {
            carry = 1;
            insert(head, tail, sum % 10);
        }
        else {
            carry = 0;
            insert(head, tail, sum);
        }
        l2 = l2->next;
    }
    while(l1 != NULL) {
        sum = carry + (l1->val % 10);
        if(sum >= 10) {
            carry = 1;
            insert(head, tail, sum % 10);
        }
        else {
            carry = 0;
            insert(head, tail, sum);
        }
        l1 = l1->next;
    }

    if(carry == (0 || 1)) {
        insert(head, tail, carry);
    }

    return head;
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

    ListNode* head1 = NULL;
    ListNode* tail1 = NULL;

    ListNode* head2 = NULL;
    ListNode* tail2 = NULL;

    insert(head1, tail1, 2);
    insert(head1, tail1, 4);
    insert(head1, tail1, 3);

    insert(head2, tail2, 5);
    insert(head2, tail2, 8);


    print(head1);

    print(head2);

    ListNode* sumNode = addTwoNumbers(head1, head2);
    print(sumNode);

    return 0;
}

