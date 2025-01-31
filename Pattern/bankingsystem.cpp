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
