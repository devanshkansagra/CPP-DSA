#include<iostream>
using namespace std;

// Code for creating a node
class Node {
    public:
        int data;
        Node* left;
        Node* right;

        Node(int data) {
            this->data = data;
            this->left = NULL;
            this->right = NULL;
        }
};

// Code for building the tree
Node* buildTree(Node* root) {
    int data;
    cout << "Enter data: ";
    cin >> data;

    root = new Node(data);

    if(data == -1) {
        return NULL;
    }
    cout << "Enter data for inserting left of Node " << data << ": " << endl;
    root->left = buildTree(root->left);

    cout << "Enter data for inserting right of Node " << data << ": " << endl;
    root->right = buildTree(root->right);
    return root;
}

// Inorder: Left, Node, Right (LNR);
void inorder(Node* root) {
    if(root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Preorder: Node, Left, Right (NLR);
void preOrder(Node* root) {
    if(root == NULL) return;
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

// PostOrder: Left, Right, Node (LRN);
void postOrder(Node* root) {
    if(root == NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}
int main() {

    Node* root = NULL;
    root = buildTree(root);

    inorder(root);
    cout << endl;
    preOrder(root);
    cout << endl;

    postOrder(root);
    cout << endl;
    return 0;
}