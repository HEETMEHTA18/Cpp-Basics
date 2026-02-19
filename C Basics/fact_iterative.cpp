#include <iostream>
using namespace std;

long long factorialIterative(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;   // primitive operation
    }
    return fact;
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    cout << "Factorial (Iterative) = " << factorialIterative(n);
    return 0;
}
