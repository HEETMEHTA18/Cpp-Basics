#include <iostream>
using namespace std;

int main() {
    int choice, quantity;
    double total = 0;

    cout << "Welcome to the Food Ordering System\n";
    cout << "Menu:\n";
    cout << "1. Burger - $5.99\n";
    cout << "2. Pizza - $8.99\n";
    cout << "3. Sandwich - $4.99\n";
    cout << "4. Exit\n";

    while (true) {
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        if (choice == 4) {
            break; // Exit the loop
        }

        if (choice < 1 || choice > 4) {
            cout << "Invalid choice, please try again.\n";
            continue;
        }

        cout << "Enter quantity: ";
        cin >> quantity;

        if (choice == 1) {
            total += quantity * 5.99;
        } else if (choice == 2) {
            total += quantity * 8.99;
        } else if (choice == 3) {
            total += quantity * 4.99;
        }

        cout << "Item added to the order. Current total: $" << total << "\n";
    }

    cout << "Thank you for your order! Your total bill is: $" << total << "\n";
    return 0;
}
