#include <iostream>
#include <algorithm>
using namespace std;

struct Node {
    char data;
    Node *left, *right;
    int height;

    Node(char value) {
        data = value;
        left = right = NULL;
        height = 1;
    }
};

int getHeight(Node* node) {
    return node ? node->height : 0;
}

int getBalance(Node* node) {
    return node ? getHeight(node->left) - getHeight(node->right) : 0;
}

Node* rightRotate(Node* y) {
    Node* x = y->left;
    Node* T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = max(getHeight(y->left),
                    getHeight(y->right)) + 1;

    x->height = max(getHeight(x->left),
                    getHeight(x->right)) + 1;

    return x;
}

Node* leftRotate(Node* x) {
    Node* y = x->right;
    Node* T2 = y->left;

    y->left = x;
    x->right = T2;

    x->height = max(getHeight(x->left),
                    getHeight(x->right)) + 1;

    y->height = max(getHeight(y->left),
                    getHeight(y->right)) + 1;

    return y;
}

Node* insert(Node* node, char key) {

    if(node == NULL)
        return new Node(key);

    if(key < node->data)
        node->left = insert(node->left, key);
    else if(key > node->data)
        node->right = insert(node->right, key);
    else
        return node;

    node->height = 1 + max(getHeight(node->left),
                           getHeight(node->right));

    int balance = getBalance(node);

    // LL Case
    if(balance > 1 && key < node->left->data)
        return rightRotate(node);

    // RR Case
    if(balance < -1 && key > node->right->data)
        return leftRotate(node);

    // LR Case
    if(balance > 1 && key > node->left->data) {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }

    // RL Case
    if(balance < -1 && key < node->right->data) {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }

    return node;
}

void inorder(Node* root) {
    if(root != NULL) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

int main() {

    Node* root = NULL;

    char arr[] = {'A','B','C','D','E','F','G','H'};

    for(int i=0;i<8;i++)
        root = insert(root, arr[i]);

    cout << "Inorder Traversal: ";
    inorder(root);

    return 0;
}