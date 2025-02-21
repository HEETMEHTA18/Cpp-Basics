#include <iostream>
using namespace std;

class InventoryItem {
private:
    int itemID;
    string itemName;
    double price;
    int stockQuantity;

public:
    // Default Constructor
    InventoryItem() {
        itemID = 0;
        itemName = "Unknown";
        price = 0.0;
        stockQuantity = 0;
    }

    // Parameterized Constructor
    InventoryItem(int id, string name, double p, int qty) {
        itemID = id;
        itemName = name;
        price = p;
        stockQuantity = qty;
    }

    // Getter for itemID
    int getItemID() {
        return itemID;
    }

    // Function to add stock
    void addStock(int qty) {
        if (qty > 0) {
            stockQuantity += qty;
            cout << "Stock updated! New quantity: " << stockQuantity << endl;
        } else {
            cout << "Invalid stock quantity!" << endl;
        }
    }

    // Function to sell items (reduce stock)
    void sellItem(int qty) {
        if (qty > 0 && qty <= stockQuantity) {
            stockQuantity -= qty;
            cout << qty << " items sold! Remaining stock: " << stockQuantity << endl;
        } else {
            cout << "Insufficient stock or invalid quantity!" << endl;
        }
    }

    // Function to display item details
    void display() {
        cout << "\nItem ID: " << itemID
             << "\nName: " << itemName
             << "\nPrice: $" << price
             << "\nStock Quantity: " << stockQuantity
             << "\n---------------------------" << endl;
    }
};

// Main function
int main() {
    const int MAX_ITEMS = 3;  // Number of inventory items
    InventoryItem items[MAX_ITEMS];  // Array of inventory items

    // Input details for items
    for (int i = 0; i < MAX_ITEMS; i++) {
        int id, qty;
        string name;
        double price;

        cout << "\nEnter details for item " << (i + 1) << ":\n";
        cout << "Item ID: ";
        cin >> id;
        cout << "Item Name: ";
        cin.ignore();  // Clear input buffer
        getline(cin, name);
        cout << "Price: ";
        cin >> price;
        cout << "Stock Quantity: ";
        cin >> qty;

        items[i] = InventoryItem(id, name, price, qty);  // Initialize item in array
    }

    int choice;
    do {
        cout << "\nInventory Management Menu:\n";
        cout << "1. Add Stock\n";
        cout << "2. Sell Item\n";
        cout << "3. Display Inventory\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int id, qty;
                cout << "Enter Item ID to add stock: ";
                cin >> id;
                cout << "Enter quantity to add: ";
                cin >> qty;

                bool found = false;
                for (int i = 0; i < MAX_ITEMS; i++) {
                    if (items[i].getItemID() == id) {  // Use getter function
                        items[i].addStock(qty);
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Item not found!" << endl;
                break;
            }

            case 2: {
                int id, qty;
                cout << "Enter Item ID to sell: ";
                cin >> id;
                cout << "Enter quantity to sell: ";
                cin >> qty;

                bool found = false;
                for (int i = 0; i < MAX_ITEMS; i++) {
                    if (items[i].getItemID() == id) {  // Use getter function
                        items[i].sellItem(qty);
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Item not found!" << endl;
                break;
            }

            case 3:
                cout << "\nCurrent Inventory:\n";
                for (int i = 0; i < MAX_ITEMS; i++) {
                    items[i].display();
                }
                break;

            case 4:
                cout << "Exiting program. Thank you!\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 4);

    return 0;
}
    