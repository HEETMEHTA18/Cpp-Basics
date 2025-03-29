#include <iostream>
using namespace std;

template <typename T>
T findMax(T* arr, int size) {
    T maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

template <typename T>
void reverseArray(T* arr, int size) {
    for (int i = 0; i < size / 2; i++) {
        swap(arr[i], arr[size - i - 1]);
    }
}

template <typename T>
void displayArray(T* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    int* intArr = new int[size];
    cout << "Enter " << size << " integer elements: ";
    for (int i = 0; i < size; i++) {
        cin >> intArr[i];
    }
    
    cout << "Maximum integer: " << findMax(intArr, size) << endl;
    reverseArray(intArr, size);
    cout << "Reversed integer array: ";
    displayArray(intArr, size);
    delete[] intArr;

    float* floatArr = new float[size];
    cout << "Enter " << size << " floating-point elements: ";
    for (int i = 0; i < size; i++) {
        cin >> floatArr[i];
    }
    
    cout << "Maximum float: " << findMax(floatArr, size) << endl;
    reverseArray(floatArr, size);
    cout << "Reversed float array: ";
    displayArray(floatArr, size);
    delete[] floatArr;

    char* charArr = new char[size];
    cout << "Enter " << size << " character elements: ";
    for (int i = 0; i < size; i++) {
        cin >> charArr[i];
    }
    
    cout << "Maximum character: " << findMax(charArr, size) << endl;
    reverseArray(charArr, size);
    cout << "Reversed character array: ";
    displayArray(charArr, size);
    delete[] charArr;

    return 0;
}
