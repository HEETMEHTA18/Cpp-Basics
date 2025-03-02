#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> vec(n);

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    cout << "You entered: ";
    for (int i = 0; i < n; i++) {
        cout << vec[i] << " ";
    }

    return 0;
}
