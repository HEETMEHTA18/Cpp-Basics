#include<iostream>
using namespace std;
class Bankaccount{
    private:
    string name;
    int accountnumber;
    double balance;
    public:
    Bankaccount(string n="unknown",int accnum=1,double bal=0.0)
    {
        name=n;
        accountnumber=accnum;
        balance=bal;
    }
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Deposit amount must be positive." << endl;
        }
    }
        void Withdraw(double amount) {
        if (amount > balance) {
            balance -= amount;
            cout << "Withdraw: " << amount << endl;
        } else {
            cout << "Withdraw amount must be positive." << endl;
        }
    }
    void Viewbalance() {
        cout << "Account holder: " << name << endl;
        cout << "Account number: " << accountnumber << endl;
        cout << "Current balance: " << balance << endl;
    }
};
int main()
{
    Bankaccount account1("John Doe", 12345, 1000.0);
    account1.Viewbalance();
    
    account1.deposit(500.0);
    account1.Viewbalance();
    
    account1.Withdraw(200.0);
    account1.Viewbalance();
    
    account1.Withdraw(1500.0); 
    account1.Viewbalance();
    
    return 0;
}