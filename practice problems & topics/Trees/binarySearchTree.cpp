#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }

    ~Node() {
        if(this->left != NULL) {
            this->left = NULL;
            delete left;
        }
        if(this->right != NULL) {
            this->right = NULL;
            delete right;
        }
    }
};

Node* insertIntoBST(Node* root, int data) {
    if (root == nullptr) {
        root = new Node(data);
        return root;
    }

    if (data > root->data) {
        root->right = insertIntoBST(root->right, data);
    }
    else if (data < root->data) {
        root->left = insertIntoBST(root->left, data);
    }

    return root;
}

Node* searchElement(Node* root, int data) {
    if (root == nullptr || root->data == data) return root;
    else if (data < root->data) {
        return searchElement(root->left, data);
    }
    else {
        return searchElement(root->right, data);
    }
}

void takeInput(Node*& root) {
    int data;
    cout << "Enter elements to insert into BST (-1 to stop): ";
    cin >> data;

    while (data != -1) {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

/*
    IF TREE = NULL
    Write "VAL not found in the tree"
    ELSE IF VAL < TREE –> DATA
    Delete(TREE ->LEFT, VAL)
    ELSE IF VAL > TREE -> DATA
    Delete(TREE ->RIGHT, VAL)
    ELSE IF TREE -> LEFT AND TREE -> RIGHT
    SET TEMP = findLargestNode(TREE -> LEFT)
    SET TREE -> DATA = TEMP -> DATA
    Delete(TREE -> LEFT, TEMP -> DATA)
    ELSE
    SET TEMP = TREE
    IF TREE -> LEFT = NULL AND TREE -> RIGHT = NULL
    SET TREE = NULL
    ELSE IF TREE -> LEFT != NULL
    SET TREE = TREE -> LEFT
    ELSE
    SET TREE = TREE -> RIGHT
    FREE TEMP
*/
void deleteNode(Node* &root, int data) {
    i
}

int main() {
    Node* root = nullptr;
    takeInput(root);
    int searchData = 100;
    Node* result = searchElement(root, searchData);
    if (result != nullptr) {
        cout << "Element " << searchData << " found with data: " << result->data << endl;
    } else {
        cout << "Element " << searchData << " not found." << endl;
    }
    return 0;
}
