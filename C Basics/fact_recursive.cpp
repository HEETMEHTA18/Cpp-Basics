#include <iostream>
using namespace std;

long long factorialRecursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorialRecursive(n - 1); // recursive call
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    cout << "Factorial (Recursive) = " << factorialRecursive(n);
    return 0;
}
