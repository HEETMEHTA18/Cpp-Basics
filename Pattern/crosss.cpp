#include <iostream>
using namespace std;

void printCrossPattern(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Print '*' on the diagonals
            if (i == j || i + j == n - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}

int main() {
    int size;
    cout << "Enter an odd number for the cross pattern size: ";
    cin >> size;

    if (size % 2 == 0) {
        cout << "Please enter an odd number!" << endl;
    } else {
        printCrossPattern(size);
    }

    return 0;
}
