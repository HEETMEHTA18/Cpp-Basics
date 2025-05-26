#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <stdexcept>
using namespace std;

// OOP: BankAccount, Loan, Transaction
class BankAccount {
    string name;
    int accountNumber;
    double balance;
public:
    BankAccount(string n, int acc, double bal = 0) : name(n), accountNumber(acc), balance(bal) {}
    void deposit(double amt) { balance += amt; }
    void withdraw(double amt) {
        if (amt > balance) throw runtime_error("Withdrawal limit exceeded");
        balance -= amt;
    }
    void display() const {
        cout << "Name: " << name << ", Acc#: " << accountNumber << ", Balance: " << balance << endl;
    }
    int getAccountNumber() const { return accountNumber; }
    double getBalance() const { return balance; }
    string getName() const { return name; }
};

class Loan {
    int loanID;
    int accountNumber;
    double amount;
public:
    Loan() : loanID(0), accountNumber(0), amount(0.0) {} // <-- Default constructor
    Loan(int id, int acc, double amt) : loanID(id), accountNumber(acc), amount(amt) {}
    void display() const {
        cout << "LoanID: " << loanID << ", Acc#: " << accountNumber << ", Amount: " << amount << endl;
    }
};

class Transaction {
    int accountNumber;
    string type;
    double amount;
public:
    Transaction(int acc, string t, double amt) : accountNumber(acc), type(t), amount(amt) {}
    void display() const {
        cout << "Acc#: " << accountNumber << ", Type: " << type << ", Amount: " << amount << endl;
    }
    int getAccountNumber() const { return accountNumber; }
    string getType() const { return type; }
    double getAmount() const { return amount; }
};

int main() {
    vector<BankAccount> accounts;
    map<int, Loan> loans;
    vector<Transaction> transactions;

    // Example: Add account
    accounts.push_back(BankAccount("Alice", 1001, 5000));
    accounts.push_back(BankAccount("Bob", 1002, 3000));

    // Example: Deposit, Withdraw with Exception Handling
    try {
        accounts[0].deposit(1000);
        accounts[0].withdraw(7000); // Will throw
    } catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }

    // Example: Add Loan
    loans[1] = Loan(1, 1001, 20000);

    // Example: Add Transaction
    transactions.push_back(Transaction(1001, "Deposit", 1000));
    transactions.push_back(Transaction(1001, "Withdraw", 7000));

    // File I/O: Save accounts
    ofstream fout("accounts.txt");
    for (const auto& acc : accounts) {
        fout << acc.getName() << " " << acc.getAccountNumber() << " " << acc.getBalance() << endl;
    }
    fout.close();

    // File I/O: Save transactions
    ofstream tfile("transactions.txt");
    for (const auto& t : transactions) {
        tfile << t.getAccountNumber() << " " << t.getType() << " " << t.getAmount() << endl;
    }
    tfile.close();

    // Display all accounts
    cout << "\nAccounts:\n";
    for (const auto& acc : accounts) acc.display();

    // Display all loans
    cout << "\nLoans:\n";
    for (const auto& l : loans) l.second.display();

    // Display all transactions
    cout << "\nTransactions:\n";
    for (const auto& t : transactions) t.display();

    return 0;
}