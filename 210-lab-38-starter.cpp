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
    cout << "in order:\n";
    tree.displayInOrder();
    cout << endl;

    // TEST: displaying tree pre order
    cout << "pre order:\n";
    tree.displayPreOrder();
    cout << endl;

    // TEST: displaying tree post order
    cout << "post order:\n";
    tree.displayPostOrder();
    cout << endl;

    // TEST: using searchNode
    cout << "Searching for 'name': ";
    if (tree.searchNode("name"))
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;

    // remove a node
    tree.remove("is");
    cout << "removed \"is\"\n";
    tree.displayInOrder();

    return 0;
}