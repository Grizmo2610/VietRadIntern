#include <iostream>
#include "BST.h"
using namespace std;
Node::Node(int data) {
    this->data = data;
    this->left = nullptr;
    this->right = nullptr;
    this->parent = nullptr;
}

BST::BST() {
    root = nullptr;
}

Node* BST::insert(Node* root, int data) {
    if (root == nullptr) {
        return new Node(data);
    }
    if (data < root->data) {
        root->left =  insert(root->left, data);
    }else {
        root->right = insert(root->right, data);
    }
    return root;
}

void BST::insert(int data) {
    root = insert(root, data);
}

void BST::inorder() {
    inorder(root);
}

void BST::preorder() {
    preorder(root);
}

void BST::postorder() {
    postorder(root);
}

void BST::inorder(Node* root) {
    if (root != nullptr) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

void BST::preorder(Node* root) {
    if (root != nullptr) {
        inorder(root->left);
        inorder(root->right);
        cout << root->data << " ";
    }
}

void BST::postorder(Node* root) {
    if (root != nullptr) {
        inorder(root->left);
        inorder(root->right);
        cout << root->data << " ";
    }
}
