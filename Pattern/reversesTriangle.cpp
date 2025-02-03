#include <iostream>
using namespace std;

int main() {
    int n;

    // Ask user for number of rows
    cout << "Enter the number of rows: ";
    cin >> n;

    // Loop to print each row
    for (int i = 1; i <= n-1; i++) {
        // Loop to print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Loop to print stars
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }
        cout << endl; // Move to the next line
    }

    return 0;
}
