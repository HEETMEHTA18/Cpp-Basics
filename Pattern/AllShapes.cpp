#include <iostream>
using namespace std;

void square(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void rightAngledTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void invertedTriangle(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void pyramid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void diamond(int n) {
    pyramid(n);
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void hollowSquare(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}

void hollowPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == n)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}

void hourglass(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    pyramid(n);
}

void butterfly(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) cout << "*";
        for (int j = 1; j <= 2 * (n - i); j++) cout << " ";
        for (int j = 1; j <= i; j++) cout << "*";
        cout << endl;
    }
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) cout << "*";
        for (int j = 1; j <= 2 * (n - i); j++) cout << " ";
        for (int j = 1; j <= i; j++) cout << "*";
        cout << endl;
    }
}

void heart() {
    int n = 6;
    for (int i = n / 2; i <= n; i += 2) {
        for (int j = 1; j < n - i; j += 2) cout << " ";
        for (int j = 1; j <= i; j++) cout << "*";
        for (int j = 1; j <= n - i; j++) cout << " ";
        for (int j = 1; j <= i; j++) cout << "*";
        cout << endl;
    }
    for (int i = n; i >= 1; i--) {
        for (int j = i; j < n; j++) cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++) cout << "*";
        cout << endl;
    }
}

int main() {
    int n = 5;
    cout << "Square:\n"; square(n);
    cout << "\nRight-Angled Triangle:\n"; rightAngledTriangle(n);
    cout << "\nInverted Triangle:\n"; invertedTriangle(n);
    cout << "\nPyramid:\n"; pyramid(n);
    cout << "\nDiamond:\n"; diamond(n);
    cout << "\nHollow Square:\n"; hollowSquare(n);
    cout << "\nHollow Pyramid:\n"; hollowPyramid(n);
    cout << "\nHourglass:\n"; hourglass(n);
    cout << "\nButterfly Pattern:\n"; butterfly(n);
    cout << "\nHeart Pattern:\n"; heart();
    return 0;
}
