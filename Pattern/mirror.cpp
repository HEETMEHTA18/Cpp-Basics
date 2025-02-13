#include <iostream>
using namespace std;

void uniquePattern(int n) {
    int num = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++)
            cout << " ";
        
        for (int j = 0; j < i + 1; j++) {
            cout << " " ;
            if (j < i)
                cout << num++;
        }
        cout << " " << endl;
    }

    num -= (n - 1); 

    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j < n - i - 1; j++)
            cout << " " ;
        
        for (int j = 0; j < i + 1; j++) {
            cout << " " ;
            if (j < i)
                cout << num++;
        }
        cout << " " << endl;
        
        num -= (i - 1);
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    uniquePattern(n);
    return 0;
}
