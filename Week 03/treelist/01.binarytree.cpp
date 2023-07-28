#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;

    node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

class binaryTree {
private:
    node* root;

public:
    binaryTree() {
        root = nullptr;
    }

    // insertion
    void insertRecursive(node* current, int value) {
        // For lesser values
        if (value <= current->data) {
            if (current->left == nullptr)
                current->left = new node(value);
            else
                insertRecursive(current->left, value);
        }
        // For greater values
        else {
            if (current->right == nullptr)
                current->right = new node(value);
            else
                insertRecursive(current->right, value);
        }
    }

    void insert(int v) {
        if (root == nullptr) {
            root = new node(v);
            return;
        }
        insertRecursive(root, v);
    }

    void inorderRecursive(node* current) {
        if (current == nullptr)
            return;
        inorderRecursive(current->left);
        cout << current->data << " ";
        inorderRecursive(current->right);
    }

    void inorder() {
        inorderRecursive(root);
    }

    void preorderRecursive(node* current) {
        if (current == nullptr)
            return;
        cout << current->data << " ";
        preorderRecursive(current->left);
        preorderRecursive(current->right);
    }

    void preorder() {
        preorderRecursive(root);
    }

    void postorderRecursive(node* current) {
        if (current == nullptr)
            return;
        postorderRecursive(current->left);
        postorderRecursive(current->right);
        cout << current->data << " ";
    }

    void postorder() {
        postorderRecursive(root);
    }

    node* findmin(node* current) {
        if (current == nullptr || current->left == nullptr)
            return current;
        return findmin(current->left);
    }

    void deletenoderecursive(node* &current, int value) {
        if (current == nullptr)
            return;

        if (value < current->data)
            deletenoderecursive(current->left, value);
        else if (value > current->data)
            deletenoderecursive(current->right, value);
        else {
            if (current->left == nullptr && current->right == nullptr) {
                node* temp = current;
                current = nullptr;
                delete temp;
            } else if (current->left == nullptr) {
                node* temp = current;
                current = current->right;
                delete temp;
            } else if (current->right == nullptr) {
                node* temp = current;
                current = current->left;
                delete temp;
            } else {
                node* temp = findmin(current->right);
                current->data = temp->data;
                deletenoderecursive(current->right, temp->data);
            }
        }
    }

    void deletenode(int value) {
        if (root == nullptr)
            return;
        deletenoderecursive(root, value);
    }

    int heightBSTrecursive(node* current) {
        if (current == nullptr)
            return 0;
        else {
            int LH = heightBSTrecursive(current->left);
            int RH = heightBSTrecursive(current->right);
            return 1 + max(LH, RH);
        }
    }

    int heightBST() {
        if (root == nullptr)
            return 0;
        return heightBSTrecursive(root);
    }

    bool balancedrecursive(node* current) {
        if (current == nullptr)
            return true;
        int LH = heightBSTrecursive(current->left);
        int RH = heightBSTrecursive(current->right);
        return abs(LH - RH) <= 1 && balancedrecursive(current->left) && balancedrecursive(current->right);
    }

    bool balanced() {
        if (root == nullptr)
            return true;
        return balancedrecursive(root);
    }
};

int main() {
    binaryTree ducky;
    ducky.insert(18);
    ducky.insert(25);
    ducky.insert(16);
    ducky.insert(36);
    ducky.insert(8);
    ducky.insert(18);
    ducky.insert(45);
    ducky.insert(12);
    ducky.insert(32);
    ducky.insert(19);

    cout << "IN-ORDER : ";
    ducky.inorder();
    cout << endl;

    cout << "PRE-ORDER : ";
    ducky.preorder();
    cout << endl;

    cout << "POST-ORDER : ";
    ducky.postorder();
    cout << endl;

    cout << "BST Height: " << ducky.heightBST() << endl;
    cout << "Is BST Balanced? " << (ducky.balanced() ? "Yes" : "No") << endl;

    return 0;
}
