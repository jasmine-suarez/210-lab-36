#include <iostream>
#include <string>
#include <fstream>
#include "StringBinaryTree.h"
using namespace std;

int main() {
    StringBinaryTree tree;

    // open file and read code into tree
    ifstream fin;
    fin.open("codes.txt");
    if (fin.good()) {
        string code;
        while (fin >> code)
            tree.insertNode(code);
        fin.close();
    }
    else
        cout << "File not found.\n";

    // displaying tree in order
    cout << "Codes in order:\n";
    tree.displayInOrder();
    cout << endl;

    return 0;
}