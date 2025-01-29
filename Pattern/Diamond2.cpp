#include <iostream>
using namespace std;

void printDiamond(int n) {
    // Upper part of diamond
    for (int i = 1; i <= n; i += 2) {
        for (int j = 0; j < (n - i) / 2; j++)
            cout << " ";
        for (int j = 0; j < i; j++)
            cout << "*";
        cout << endl;
    }
    // Lower part of diamond
    for (int i = n - 2; i > 0; i -= 2) {
        for (int j = 0; j < (n - i) / 2; j++)
            cout << " ";
        for (int j = 0; j < i; j++)
            cout << "*";
        cout << endl;
    }
}

int main() {
    int size;
    cout << "Enter an odd number for the diamond size: ";
    cin >> size;
    if (size % 2 == 0) {
        cout << "Please enter an odd number." << endl;
    } else {
        printDiamond(size);
    }
    return 0;
}
