#include <iostream>
using namespace std;

void fibonacciIterative(int n) {
    int a = 0, b = 1, c;

    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        c = a + b;  // primitive operation
        a = b;
        b = c;
    }
}

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    fibonacciIterative(n);
    return 0;
}
