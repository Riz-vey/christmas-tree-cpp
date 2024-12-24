#include <iostream>
using namespace std;

void printTree(int n) {
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = i; j < n; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void printTrunk(int n) {
    // Print the trunk of the tree
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < n - 1; j++) {
            cout << " ";
        }
        cout << "*" << endl;
    }
}

void printMessage(int n) {
    // Center the message below the tree
    for (int i = 0; i < n - 7; i++) {
        cout << " ";
    }
    cout << "Happy Christmas!" << endl;
}

int main() {
    int levels = 6; // Number of levels in the tree
    printTree(levels);
    printTrunk(levels);
    printMessage(levels);

    return 0;
}
