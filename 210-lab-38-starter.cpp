#include <iostream>
#include <string>
#include "StringBinaryTree.h"
using namespace std;

int main() {
    StringBinaryTree tree;

    // TEST: inserting strings into tree
    tree.insertNode("hi");
    tree.insertNode("my");
    tree.insertNode("name");
    tree.insertNode("is");
    tree.insertNode("jasmine");

    // TEST: displaying tree in order
    tree.displayInOrder();

    // TEST: using searchNode
    cout << "Searching for 'name': ";

    return 0;
}