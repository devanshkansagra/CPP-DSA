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

void preOrderTraversal(Node* &root) {
    if(root == NULL) return;

    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void inorderToPreOrder(vector <int> &inorder) {
    Node* root = BST(inorder, 0, inorder.size() -1);
    cout << "Pre order: ";
    preOrderTraversal(root);
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

    inorderToPreOrder(inorder);
    return 0;
}