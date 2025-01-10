#include <iostream>
using namespace std;

int main() {
    const int size = 5; // Size of the array
    int arr[size];

    // Using a for loop to take input
    cout << "Enter " << size << " elements using a for loop:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Displaying the array
    cout << "\nArray after using for loop: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Using a while loop to take input
    cout << "\nEnter " << size << " elements using a while loop:" << endl;
    int index = 0;
    while (index < size) {
        cout << "Enter element " << index + 1 << ": ";
        cin >> arr[index];
        index++;
    }

    // Displaying the array
    cout << "\nArray after using while loop: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Using a do-while loop to take input
    cout << "\nEnter " << size << " elements using a do-while loop:" << endl;
    index = 0;
    do {
        cout << "Enter element " << index + 1 << ": ";
        cin >> arr[index];
        index++;
    } while (index < size);

    // Displaying the array
    cout << "\nArray after using do-while loop: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
