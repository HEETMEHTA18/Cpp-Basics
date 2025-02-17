#include <iostream>

class Item {
public:
    int id;
    char name[20]; // Short name length for simplicity
    double price;
    int quantity;

    Item(int id, const char* name, double price, int quantity) {
        id = id;
        strncpy(name, name, 19);
        name[19] = '\0'; // Ensure null-termination
        price = price;
        quantity = quantity;
    }
};

class InventorySystem {
public:
    Item items[10]; // Fixed size array for simplicity
    int itemCount = 0;

    void addItem(const Item& item) {
        if (itemCount < 10) {
            items[itemCount++] = item;
        }
    }

    void increaseStock(int itemId, int amount) {
        for (int i = 0; i < itemCount; i++) {
            if (items[i].id == itemId) {
                items[i].quantity += amount;
                return;
            }
        }
        std::cout << "Item not found." << std::endl;
    }

    bool decreaseStock(int itemId, int amount) {
        for (int i = 0; i < itemCount; i++) {
            if (items[i].id == itemId) {
                if (items[i].quantity >= amount) {
                    items[i].quantity -= amount;
                    return true;
                }
                std::cout << "Not enough stock." << std::endl;
                return false;
            }
        }
        std::cout << "Item not found." << std::endl;
        return false;
    }

    void displayInventory() {
        for (int i = 0; i < itemCount; i++) {
            std::cout << "ID: " << items[i].id << ", Name: " << items[i].name 
                      << ", Price: $" << items[i].price << ", Quantity: " << items[i].quantity << std::endl;
        }
    }
};

int main() {
    InventorySystem inventory;

    inventory.addItem(Item(1, "Widget", 15.99, 50));
    inventory.addItem(Item(2, "Gadget", 24.99, 30));

    inventory.displayInventory();

    inventory.increaseStock(1, 20);
    inventory.decreaseStock(1, 10); // Sale of 10 items

    inventory.displayInventory();

    return 0;
}