#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        Node* left;
        int data;
        Node* right;

        Node(int data) {
            this->left = NULL;
            this->data = data;
            this->right = NULL;
        }
};

Node *BST(vector <int> inorder, int start, int end) {
    if (start > end) {
        return NULL;
    }

    int mid = start + (end - start) / 2;
    Node* root = new Node(inorder[mid]);
    root->left = BST(inorder, start, mid - 1);
    root->right = BST(inorder, mid + 1, end);

    return root;
}

void postOrderTraversal(Node* &root) {
    if(root == NULL) return;

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << " ";
}

void inorderToPostOrder(vector <int> &inorder) {
    Node* root = BST(inorder, 0, inorder.size() -1);
    cout << "Post order: ";
    postOrderTraversal(root);
    cout << endl;
}
int main() {

    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    vector <int> inorder;
    cout << "Enter inorder elements: ";
    for(int i = 0; i < n; i++) {
        int node;
        cin >> node;
        inorder.push_back(node);
    }

    inorderToPostOrder(inorder);
    return 0;
}