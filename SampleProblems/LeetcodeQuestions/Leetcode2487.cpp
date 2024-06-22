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
    ListNode* newNode = NULL;
    if(head == NULL) {
        newNode = new ListNode(data);
        head = tail = newNode;
    }
    else {
        newNode = new ListNode(data);
        tail->next = newNode;
        tail = newNode;
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

int getLength(ListNode* head) {
    ListNode* temp = head;
    int length = 0;
    while(temp != NULL) {
        length += 1;
        temp = temp->next;
    }
    return length;
}
ListNode* removeNodes(ListNode* head) {
    ListNode* temp = head;
    stack <int> st;

    int length = getLength(head);

    for(int i = 0; i < length; i++) {
        while(!st.empty() && st.top() < temp->val) {
            st.pop();
        }
        st.push(temp->val);
        temp = temp->next;
    }
    ListNode* newHead = NULL;

    while(!st.empty()) {
        insertHead(newHead, st.top());
        st.pop();
    }

    return newHead;
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

    ListNode* head = NULL;
    ListNode * tail = NULL;
    insert(head, tail, 1);
    insert(head, tail, 1);
    insert(head, tail, 1);
    insert(head, tail, 1);
    // insert(head, tail, 2);
    // insert(head, tail, 13);
    // insert(head, tail, 3);
    // insert(head, tail, 8);

    ListNode* modified = removeNodes(head);
    print(modified);
    return 0;
}