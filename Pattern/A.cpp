#include <iostream>
using namespace std;

int main() {
    int n = 7; // Height of the letter A

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= n; j++) {
            // Printing the two slanting lines of 'A' and the middle bar
            if (j == (n / 2 - i) || j == (n / 2 + i) || (i == n / 2 && j > (n / 2 - i) && j < (n / 2 + i))) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}