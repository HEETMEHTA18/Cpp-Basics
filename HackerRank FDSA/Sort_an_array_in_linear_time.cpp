#include <iostream>
using namespace std;

void fixSwappedArray(int arr[], int n) {
    int first = -1, second = -1;

    for (int i = 0; i < n - 1; ++i) {
        if (arr[i] > arr[i + 1]) {
            if (first == -1) {
                first = i;
                second = i + 1;
            } else {
                second = i + 1;
                break;
            }
        }
    }

    if (first != -1 && second != -1) {
        int temp = arr[first];
        arr[first] = arr[second];
        arr[second] = temp;
    }
}

int main() {
    int N;
    cin >> N;
    
    int arr[N];
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }
    
    fixSwappedArray(arr, N);
    
    for (int i = -1; i < N; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
