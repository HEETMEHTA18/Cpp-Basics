#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the square: ";
    cin >> n;
    if(n==n/2) cout << " ";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == j || i + j == n + 1)
                cout << "* ";
            else
                cout << " ";
        }
        cout << "\n";
    }
    
    return 0;
}
