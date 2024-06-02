#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtTail(Node* &head, Node* &tail, int data) {
    if(tail == NULL) {
        Node* temp = new Node(data);
        tail = head = temp;
    } else {
        Node* temp = new Node(data);
        tail->next = temp;
        tail = temp;
    }
}

int getLength(Node* head) {
    int count = 0;
    Node* temp = head;
    while(temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

Node* moveHeadByK(Node* head, int k) {
    Node* ptr = head;
    while(k--) {
        ptr = ptr->next;
    }
    return ptr;
}

Node* intersectedNode(Node* head1, Node* head2) {
    int l1 = getLength(head1);
    int l2 = getLength(head2);

    Node* ptr1 = head1;
    Node* ptr2 = head2;
    if(l1 > l2) {
        int k = l1 - l2;
        ptr1 = moveHeadByK(head1, k);
    } else {
        int k = l2 - l1;
        ptr2 = moveHeadByK(head2, k);
    }

    while(ptr1 && ptr2) {
        if(ptr1 == ptr2) {
            return ptr1;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return NULL;
}

void print(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head1 = NULL;
    Node* tail1 = NULL;

    insertAtTail(head1, tail1, 1);
    insertAtTail(head1, tail1, 2);
    insertAtTail(head1, tail1, 3);
    insertAtTail(head1, tail1, 4);
    insertAtTail(head1, tail1, 5);
    print(head1);

    Node* head2 = NULL;
    Node* tail2 = NULL;

    insertAtTail(head2, tail2, 6);
    insertAtTail(head2, tail2, 7);
    tail2->next = head1->next->next->next; // Creating an intersection point
    print(head2);

    Node* intersectNode = intersectedNode(head1, head2);
    if (intersectNode) {
        cout << "Intersection at node with data: " << intersectNode->data << endl;
    } else {
        cout << "No intersection" << endl;
    }

    return 0;
}
