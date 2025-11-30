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

    string code;
    string newCode;

    // menu for user to add, delete, search, and modify records.
    int choice;
    do {
        cout << "\nMain Menu\n";
        cout << "[1] Add record\n";
        cout << "[2] Delete record\n";
        cout << "[3] Search for record\n";
        cout << "[4] Modify Record\n";
        cout << "[5] Display tree in-order\n";
        cout << "[0] Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                cout << "\nEnter code to add: ";
                getline(cin, code);
                tree.insertNode(code);
                break;

            case 2:
                cout << "\nEnter code to delete: ";
                getline(cin, code);
                if (tree.searchNode(code)) {
                    tree.remove(code);
                    cout << "Code " << code << " deleted.\n";
                }
                else 
                    cout << "Code " << code << " not found in tree.\n";
                break;

            case 3:
                cout << "\nEnter code to search for: ";
                getline(cin, code);
                if (tree.searchNode(code))
                    cout << "Code " << code << " found.\n";
                else 
                    cout << "Code " << code << " not found in tree.\n";
                break;

            case 4:
                cout << "Enter code to modify: ";
                getline(cin, code);
                if (tree.searchNode(code)) {
                    cout << "Enter new value: ";
                    getline(cin, newCode);
                    tree.remove(code);
                    tree.insertNode(newCode);
                }
                else 
                    cout << "Code " << code << " not found in tree.\n";
                break;

                break;
            case 5: 
                break;
            case 0:
                cout << "\nExiting program.\n";
                break;
            default:
                cout << "\nInvalid choice. Enter number 0-5.\n";
                break;
        }

    } while (choice != 0);

    return 0;
}