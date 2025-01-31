#include <iostream>
using namespace std;

class BankAccount {
private:
    string owner;
    double balance;

public:
    // Constructor
    BankAccount(string name, double initialBalance) {
        owner = name;
        balance = initialBalance;
    }

    // Deposit function
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited $" << amount << ". New balance: $" << balance << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Withdraw function
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn $" << amount << ". New balance: $" << balance << endl;
        } else {
            cout << "Invalid or insufficient funds!" << endl;
        }
    }

    // Display balance
    void showBalance() {
        cout << "Account Holder: " << owner << " | Balance: $" << balance << endl;
    }
};

int main() {
    // Creating a BankAccount object
    BankAccount myAccount("John Doe", 1000.0);

    // Performing transactions
    myAccount.showBalance();
    myAccount.deposit(500);
    myAccount.withdraw(200);
    myAccount.withdraw(1500);  // Invalid withdrawal
    myAccount.showBalance();

    return 0;
}
