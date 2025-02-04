#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows (odd number): ";
    cin >> n;

    if (n % 2 == 0) {
        cout << "Please enter an odd number!" << endl;
        return 1;
    }

    int mid = (n / 2) + 1;

    // Upper half
    for (int i = 1; i <= mid; i++) {
        for (int j = 1; j <= mid - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            if (k == 1 || k == (2 * i - 1))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    // Lower half
    for (int i = mid - 1; i >= 1; i--) {
        for (int j = 1; j <= mid - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            if (k == 1 || k == (2 * i - 1))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
