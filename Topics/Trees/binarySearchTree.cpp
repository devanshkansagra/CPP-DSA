#include<bits/stdc++.h>
using namespace std;

class Node {
    public: 
        int data;
        Node* left;
        Node* right;

        Node(int data) {
            this->data = data;
            this->left = left;
            this->right = right;
        }
};

Node* insertIntoBST(Node* root, int data) {
    if(root == NULL) {
        root = new Node(data);
        return root;
    }

    // insert data to left is smaller than root
    if(data < root->data) {
        root->left = insertIntoBST(root->left, data);
    }

    // insert data to right if greater than root
    else if(data > root->data) {
        root->right = insertIntoBST(root->right, data);
    }

    return root;
}

// Display the tree in inorder traversal
void inorder(Node* &root) {
    if(root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Search the element in the BST
bool searchElement(Node* root, int data) {
    
    // if the root found null
    if(root == NULL) return false;

    // if the root has the data
    if(root->data == data) return true;

    // check for left part of the tree
    if(data < root->data) {
        return searchElement(root->left, data);
    }

    // check for the right part of the tree
    else {
        return searchElement(root->right, data);
    }
    return false;
}   

// Finding the minimum and maximum value in BST
int minVal(Node* root) {
    Node* temp = root;
    while(temp->left != NULL) {
        temp = temp->left;
    }
    return temp->data;
}

int maxVal(Node* root) {
    Node* temp = root;
    while(temp->right != NULL) {
        temp = temp->right;
    }
    return temp->data;
}

int minValRecursion(Node* root) {
    Node* temp = root;
    if(temp->left == NULL) return temp->data;
    minValRecursion(temp->left);
}
int maxValRecursion(Node* root) {
    Node* temp = root;
    if(temp->right == NULL) return temp->data;
    maxValRecursion(temp->right);
}

// Delete an element
Node* deleteBST(Node* root, int data) {
    if(root == NULL) return root;

    if(root->data == data) {

        // 0 child case
        if(root->left == NULL && root->right == NULL) {
            delete root;
            return NULL;
        }

        // 1 child case
        // Left child
        else if(root->left != NULL && root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        // Right child
        else if (root->right != NULL && root->left == NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        }

        // 2 child case
        if(root->left != NULL && root->right != NULL) {
            int maxValEle = maxValRecursion(root->left);
            root->data = maxValEle;
            root->left = deleteBST(root->left, maxValEle);
            return root;
        }

    }
    else if(data > root->data) {
        root->right = deleteBST(root->right, data);
        return root;
    }
    else {
        root->left = deleteBST(root->left, data);
        return root;
    }
}

void takeInput(Node* &root) {
    int data;
    cout << "Enter the data: ";
    cin >> data;
    while(data != -1) {
        root = insertIntoBST(root, data);
        cin >> data;
    } 
}
int main() {

    Node* root = NULL;
    takeInput(root);

    cout << "Printing the data in inorder traversal" << endl;
    inorder(root);
    cout << endl;

    // searchFor element 
    cout << searchElement(root, 5) << endl;

    int minValBST = minVal(root);
    cout << "Minimum value in tree is: " << minValBST << endl;

    int maxValBST = maxVal(root);
    cout << "Maximum value in tree is: " << maxValBST << endl;

    int minValBSTRecursion = minValRecursion(root);
    cout << "Minimum value in tree using recursion is: " << minValBSTRecursion << endl;

    int maxValBSTRecursion = maxValRecursion(root);
    cout << "Minimum value in tree using recursion is: " << maxValBSTRecursion << endl;

    root = deleteBST(root, 7);
    cout << "After deletion: ";
    inorder(root);
    cout << endl;
    return 0;
}