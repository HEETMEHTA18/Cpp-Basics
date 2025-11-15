#include <iostream>
using namespace std;

int removeduplicates(int arr[], int n) {
    if (n == 0) return 0;

    int j = 1;  
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            arr[j] = arr[i];
            j++;
        }
    }
    return j; 
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int uniqueCount = removeduplicates(arr, n);

    cout << "Unique elements: ";
    for (int i = 0; i < uniqueCount; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nCount = " << uniqueCount << endl;

    return 0;
}
