#include <iostream>
using namespace std;

int main() {
    int side;

    cout << "Enter the side length of the square: ";
    cin >> side;

    for (int i = 1; i <= side; i++) {
        for (int j = 1; j <= side; j++) {
            // Print stars for the first and last row, or first and last column
            if (i == 1 || i == side || j == 1 || j == side) {
                cout << "* ";
            } else {
                cout << "  "; // Two spaces to maintain square shape
            }
        }
        cout << endl;
    }

    return 0;
}