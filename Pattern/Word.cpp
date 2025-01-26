#include <iostream>
using namespace std;

int main() {
    int rows = 7;

    for (int i = 0; i < rows; i++) {
        // Letter H
        for (int j = 0; j < 5; j++) {
            if (j == 0 || j == 4 || i == rows / 2) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }

        cout << "  "; // Space between letters

        // Letter E
        for (int j = 0; j < 5; j++) {
            if (j == 0 || i == 0 || i == rows / 2 || i == rows - 1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }

        cout << "  "; // Space between letters

        // Letter E
        for (int j = 0; j < 5; j++) {
            if (j == 0 || i == 0 || i == rows / 2 || i == rows - 1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }

        cout << "  "; // Space between letters

        // Letter T
        for (int j = 0; j < 5; j++) {
            if (i == 0 || j == 2) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }

        cout << endl;
    }

    return 0;
}
