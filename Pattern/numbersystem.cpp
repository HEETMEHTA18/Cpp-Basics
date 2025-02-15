#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    int number = 1;
    for (int i = 1; i <= rows; i++) {
        // Print i numbers in the i-th row
        for (int j = 1; j <= i; j++) {
            cout << number << " ";
            number++;
        }
        cout << endl; // Move to the next row
    }

    return 0;
}