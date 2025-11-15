#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    set<int> s;  
    for (int i = 0; i < n; i++) {
        s.insert(arr[i]);
    }
    for (int x : s) {
        cout << x << " ";
    }

    return 0;
}
