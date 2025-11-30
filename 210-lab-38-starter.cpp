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

    // menu for user to add, delete, search, and modify records.
    int choice;
    do {
        cout << "Main Menu\n";
        cout << "[1] \n";
        cout << "[2] \n";
        cout << "[3] \n";
        cout << "[4] \n";
        cout << "[5] \n";
        cout << "[6] \n";
        cout << "[7] \n";

    } while (choice != 0);

    return 0;
}