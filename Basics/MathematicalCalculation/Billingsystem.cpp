#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

class Product {
public:
    string name;
    float price;
    int quantity;

    Product(string n, float p, int q) {
        name = n;
        price = p;
        quantity = q;
    }
};

class BillingSystem {
private:
    vector<Product> cart;

public:
    void addProduct() {
        string name;
        float price;
        int quantity;

        cout << "Enter product name: ";
        cin >> name;
        cout << "Enter price: ";
        cin >> price;
        cout << "Enter quantity: ";
        cin >> quantity;

        cart.push_back(Product(name, price, quantity));
        cout << "Product added successfully!\n";
    }

    void viewCart() {
        if (cart.empty()) {
            cout << "Cart is empty.\n";
            return;
        }

        cout << "\n----- Cart Items -----\n";
        cout << setw(15) << left << "Name" 
             << setw(10) << "Price" 
             << setw(10) << "Quantity" 
             << setw(10) << "Total\n";

        for (const auto& item : cart) {
            cout << setw(15) << left << item.name 
                 << setw(10) << item.price 
                 << setw(10) << item.quantity 
                 << setw(10) << (item.price * item.quantity) << endl;
        }
    }

    void generateBill() {
        if (cart.empty()) {
            cout << "Cart is empty. Nothing to bill.\n";
            return;
        }

        float totalAmount = 0;
        cout << "\n----- Final Bill -----\n";
        for (const auto& item : cart) {
            totalAmount += item.price * item.quantity;
        }

        cout << "Total Amount: $" << fixed << setprecision(2) << totalAmount << endl;
        cout << "Thank you for shopping with us!\n";
    }

    void menu() {
        int choice;
        do {
            cout << "\n========== D-Mart Billing System ==========\n";
            cout << "1. Add Product to Cart\n";
            cout << "2. View Cart\n";
            cout << "3. Generate Bill\n";
            cout << "4. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1: addProduct(); break;
                case 2: viewCart(); break;
                case 3: generateBill(); break;
                case 4: cout << "Exiting system...\n"; break;
                default: cout << "Invalid choice! Try again.\n";
            }
        } while (choice != 4);
    }
};

int main() {
    BillingSystem system;
    system.menu();
    return 0;
}
