#include <iostream>
#include <map>

using namespace std;

class Bank {
private:
    struct Account {
        string name;
        double balance;
    };
    map<int, Account> accounts;
    int totalAccounts = 0;

public:
    void createAccount(int accountNumber, string accountHolder, double initialBalance) {
        if (accounts.find(accountNumber) == accounts.end()) {
            accounts[accountNumber] = {accountHolder, initialBalance};
            totalAccounts++;
            cout << "Account created successfully.\n";
        } else {
            cout << "Account number already exists.\n";
        }
    }

    void transferFunds(int fromAccount, int toAccount, double amount) {
        if (accounts.find(fromAccount) != accounts.end() && accounts.find(toAccount) != accounts.end()) {
            if (accounts[fromAccount].balance >= amount) {
                accounts[fromAccount].balance -= amount;
                accounts[toAccount].balance += amount;
                cout << "Transfer successful.\n";
            } else {
                cout << "Insufficient balance.\n";
            }
        } else {
            cout << "One or both account numbers are invalid.\n";
        }
    }

    void checkBalance(int accountNumber) {
        if (accounts.find(accountNumber) != accounts.end()) {
            cout << "Account Holder: " << accounts[accountNumber].name << "\n";
            cout << "Balance: Rs." << accounts[accountNumber].balance << "\n";
        } else {
            cout << "Account not found.\n";
        }
    }

    void displayTotalAccounts() {
        cout << "Total Accounts: " << totalAccounts << "\n";
    }
};

int main() {
    Bank bank;
    int choice;
    
    while (true) {
        cout << "\nBank Management System";
        cout << "\n1. Create Account";
        cout << "\n2. Transfer Funds";
        cout << "\n3. Check Balance";
        cout << "\n4. Display Total Accounts";
        cout << "\n5. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 1) {
            int accNum;
            string name;
            double balance;
            cout << "Enter Account Number: ";
            cin >> accNum;
            cout << "Enter Account Holder Name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Enter Initial Balance: ";
            cin >> balance;
            bank.createAccount(accNum, name, balance);
        } else if (choice == 2) {
            int from, to;
            double amount;
            cout << "Enter Sender Account Number: ";
            cin >> from;
            cout << "Enter Receiver Account Number: ";
            cin >> to;
            cout << "Enter Amount to Transfer: ";
            cin >> amount;
            bank.transferFunds(from, to, amount);
        } else if (choice == 3) {
            int accNum;
            cout << "Enter Account Number: ";
            cin >> accNum;
            bank.checkBalance(accNum);
        } else if (choice == 4) {
            bank.displayTotalAccounts();
        } else if (choice == 5) {
            cout << "Exiting ..."<<"Exited..."<<endl;
            break;
        } else {
            cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}