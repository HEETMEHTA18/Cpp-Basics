#include <iostream>
using namespace std;

int main() {
    int n = 7; // Height of the pattern (adjust as needed)

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Printing the upper "V" part of Y
            if ((i < n / 2 && (j == i || j == n - 1 - i)) || 
                (i >= n / 2 && j == n / 2)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
