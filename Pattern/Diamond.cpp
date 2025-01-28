#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter the number of rows (odd number): ";
    cin >> rows;

    // Upper part of the diamond
    for (int i = 1; i <= rows; i += 2) {
        // Print spaces
        for (int j = 1; j <= (rows - i) / 2; j++) {
            cout << " ";
        }

        // Print stars
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }

        // Move to the next line
        cout << endl;
    }

    // Lower part of the diamond
    for (int i = rows - 2; i >= 1; i -= 2) {
        // Print spaces
        for (int j = 1; j <= (rows - i) / 2; j++) {
            cout << " ";
        }

        // Print stars
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }

        // Move to the next line
        cout << endl;
    }

    return 0;
}