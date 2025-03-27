#include <iostream>
#include <vector>
using namespace std;

void displayVector(const vector<int>& vec) {
    cout << "Current vector: ";
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> myVector;
    int choice, value;
    
    do {
        cout << "\nMenu:\n";
        cout << "1. Add element\n";
        cout << "2. Remove element\n";
        cout << "3. Display vector\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Enter value to add: ";
                cin >> value;
                myVector.push_back(value);
                break;
            case 2:
                if (!myVector.empty()) {
                    cout << "Enter value to remove: ";
                    cin >> value;
                    auto it = find(myVector.begin(), myVector.end(), value);
                    if (it != myVector.end()) {
                        myVector.erase(it);
                        cout << "Element removed.\n";
                    } else {
                        cout << "Element not found.\n";
                    }
                } else {
                    cout << "Vector is empty. Nothing to remove.\n";
                }
                break;
            case 3:
                displayVector(myVector);
                break;
            case 4:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);
    
    return 0;
}
