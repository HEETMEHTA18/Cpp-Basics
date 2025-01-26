#include <iostream>
using namespace std;

int main() {
    int rows = 7, columns = 5;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            // Print stars for the sides and the middle row
            if (j == 0 || j == columns - 1 || i == rows / 2) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}

