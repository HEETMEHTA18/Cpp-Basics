#include <iostream>
using namespace std;

// Function to print a square pattern
void squarePattern(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// Function to print a right-angled triangle
void rightTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// Function to print an inverted right-angled triangle
void invertedTriangle(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// Function to print a pyramid pattern
void pyramidPattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Function to print a diamond pattern
void diamondPattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int size;
    cout << "Enter the size of patterns: ";
    cin >> size;

    cout << "\nSquare Pattern:\n";
    squarePattern(size);

    cout << "\nRight-Angled Triangle:\n";
    rightTriangle(size);

    cout << "\nInverted Triangle:\n";
    invertedTriangle(size);

    cout << "\nPyramid Pattern:\n";
    pyramidPattern(size);

    cout << "\nDiamond Pattern:\n";
    diamondPattern(size);

    return 0;
}
