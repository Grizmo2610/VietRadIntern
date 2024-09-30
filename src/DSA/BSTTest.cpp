#include <iostream>
#include "BSTTest.h"
#include <random>
#include "BST.h"
using namespace std;

void bstTest() {
    random_device rd;
    mt19937 gen(rd());

    uniform_int_distribution<> dist(0, 10000);
    const int n = dist(gen) / 100 + 5;;
    BST bst{};
    for (int i = 0; i < n; i++) {
        bst.insert(dist(gen));
    }
    cout << endl;
    bst.inorder();
}