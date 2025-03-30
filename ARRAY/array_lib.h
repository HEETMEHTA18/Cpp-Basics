#include <array_lib.h>

Array::Array() {
    size = 0;
}

void Array::insert(int value) {
    if (size < 3) {
        arr[size++] = value;
        cout << "Inserted " << value << " into array.\n";
    } else {
        cout << "Array is full. Cannot add more elements.\n";
    }
}

void Array::display() {
    if (size == 0) {
        cout << "The array is empty.\n";
        return;
    }
    cout << "Current array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Array::remove(int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            for (int j = i; j < size - 1; j++) {
                arr[j] = arr[j + 1];
            }
            size--;
            cout << "Removed " << value << " from the array.\n";
            return;
        }
    }
    cout << "Element " << value << " not found in the array.\n";
}

void Array::search(int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            cout << "Found " << value << " in the array.\n";
            return;
        }
    }
    cout << "Element " << value << " not found.\n";
}

void Array::sort() {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    cout << "Array has been sorted.\n";
}

void Array::clear() {
    size = 0;
    cout << "Array has been cleared.\n";
}
