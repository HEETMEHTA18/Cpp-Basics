#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    double accountNumber;
    double balance;

public:
    // Constructor to initialize an account with user-defined balance
    BankAccount(string name, int accNum, double initialBalance) {
        accountHolder = name;
        accountNumber = accNum;
        balance = initialBalance;
    }

    // Deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << ". New balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Withdraw money (with validation)
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << ". New balance: " << balance << endl;
        } else {
            cout << "Insufficient balance or invalid amount!" << endl;
        }
    }

    // Display account details
    void display() {
        cout << "\nAccount Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() 
{
    string name;
    double accNum;
    double initialBalance;

    // User input for account setup
    cout << "Enter your name: ";
    cin.ignore();  // Clear input buffer
    getline(cin, name);
    cout << "Enter account number: ";
    cin >> accNum;
    cout << "Enter initial balance: ";
    cin >> initialBalance;

    // Creating user account
    BankAccount userAccount(name, accNum, initialBalance);
    int choice;
    double amount;

    // Menu-driven program
    do {
        cout << "\nBank Account Menu:\n";
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Display Account Details\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter deposit amount: ";
                cin >> amount;
                userAccount.deposit(amount);
                break;
            case 2:
                cout << "Enter withdrawal amount: ";
                cin >> amount;
                userAccount.withdraw(amount);
                break;
            case 3:
                userAccount.display();
                break;
            case 4:
                cout << "Thank you for using our banking system!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 4);

 
    return 0;
} // End of main function