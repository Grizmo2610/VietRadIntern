//
// Created by Hoang Tu on 9/30/2024.
//

#ifndef BST_H
#define BST_H

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node* parent;
    Node(int data);
};

class BST {
public:
    Node* root;

    BST();

    void insert(int data);

    void postorder();

    void inorder();

    void preorder();

private:
    Node* insert(Node *root, int data);

    void inorder(Node* root);

    void preorder(Node* root);

    void postorder(Node* root);
};



#endif //BST_H
