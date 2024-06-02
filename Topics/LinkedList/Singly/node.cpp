#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

        Node(int data) {
            this->data = data;
            this->next = NULL ;
        }
};

int main() {

    Node* n1 = new Node(3);
    Node* n2 = new Node(4);
    cout << n1->data << endl << n1->next << endl;
    cout << n2->data << endl << n2->next << endl;
    return 0;
}