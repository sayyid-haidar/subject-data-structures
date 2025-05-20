#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    
    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

Node* findMin(Node* root) {
    if (root == nullptr) {
        return nullptr;
    }
    
    while (root->left != nullptr) {
        root = root->left;
    }
    return root;
}

Node* findMax(Node* root) {
    if (root == nullptr) {
        return nullptr;
    }
    
    while (root->right != nullptr) {
        root = root->right;
    }
    return root;
}

int height(Node* root) {
    if (root == nullptr) {
        return 0;
    }
    
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    
    return max(leftHeight, rightHeight) + 1;
}

int countLeaves(Node* root) {
    if (root == nullptr) {
        return 0;
    }
    
    if (root->left == nullptr && root->right == nullptr) {
        return 1;
    }
    
    return countLeaves(root->left) + countLeaves(root->right);
}

Node* insert(Node* root, int value) {
    if (root == nullptr) {
        return new Node(value);
    }
    
    if (value < root->data) {
        root->left = insert(root->left, value);
    } else if (value > root->data) {
        root->right = insert(root->right, value);
    }
    
    return root;
}

int main() {
    Node* root = nullptr;
    
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);
    
    cout << "Nilai minimum: " << findMin(root)->data << endl;
    cout << "Nilai maksimum: " << findMax(root)->data << endl;
    cout << "Tinggi tree: " << height(root) << endl;
    cout << "Jumlah daun: " << countLeaves(root) << endl;
    
    return 0;
}