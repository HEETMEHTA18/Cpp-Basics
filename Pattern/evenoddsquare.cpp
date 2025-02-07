#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of rows for the triangle: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) 
    {
        for (int k = 1; k <= n-k; ++k) {
          
          if((i+k)%2==0)
          {
            cout << "1 ";
          }
          else
          {
            cout << "0 ";
          }
        }

       
        cout << endl;
    }

    return 0;
}