#include <iostream>
#include <iomanip>

using namespace std;

// Function template to find the maximum value in an array
template <typename T>
T findMax(T arr[], int size) {
    T maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

// Function template to reverse an array
template <typename T>
void reverseArray(T arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        T temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

// Function template to display an array
template <typename T>
void displayArray(T arr[], int size) {
    cout << "Collection Elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int size;
    char choice;

    cout << "Choose Data Type (i - Integer, f - Float, c - Character): ";
    cin >> choice;

    cout << "Enter the size of the collection: ";
    cin >> size;

    if (size <= 0) {
        cout << "Invalid size! Exiting..." << endl;
        return 0;
    }

    // Dynamically allocating array based on the selected type
    if (choice == 'i') {
        int *arr = new int[size];
        cout << "Enter " << size << " integers: ";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }

        displayArray(arr, size);
        cout << "Maximum Value: " << findMax(arr, size) << endl;
        reverseArray(arr, size);
        cout << "Reversed ";
        displayArray(arr, size);

        delete[] arr;  // Free allocated memory

    } else if (choice == 'f') {
        float *arr = new float[size];
        cout << "Enter " << size << " floating-point numbers: ";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }

        displayArray(arr, size);
        cout << "Maximum Value: " << findMax(arr, size) << endl;
        reverseArray(arr, size);
        cout << "Reversed ";
        displayArray(arr, size);

        delete[] arr;  // Free allocated memory

    } else if (choice == 'c') {
        char *arr = new char[size];
        cout << "Enter " << size << " characters: ";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }

        displayArray(arr, size);
        cout << "Maximum Value: " << findMax(arr, size) << endl;
        reverseArray(arr, size);
        cout << "Reversed ";
        displayArray(arr, size);

        delete[] arr;  // Free allocated memory

    } else {
        cout << "Invalid choice! Exiting..." << endl;
    }

    return 0;
}
