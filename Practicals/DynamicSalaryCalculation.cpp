#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Employee {
    string name;
    double basicSalary;
    double bonus;
public:
    Employee(const string &n, double basic, double bonusAmount = 1000.0)
        : name(n), basicSalary(basic), bonus(bonusAmount) {}

    inline double getTotalSalary() const {
        return basicSalary + bonus;
    }

    void displayDetails() const {
        cout << "Name: " << name << "\n";
        cout << "Basic Salary: $" << basicSalary << "\n";
        cout << "Bonus: $" << bonus << "\n";
        cout << "Total Salary: $" << getTotalSalary() << "\n";
    }
};

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;
    vector<Employee> employees;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        cout << "Employee " << i + 1 << " details:\n";
        string name;
        double basic, bonus;
        cout << "Name: ";
        getline(cin, name);
        cout << "Basic Salary: ";
        cin >> basic;
        cout << "Enter bonus amount (or -1 for default bonus): ";
        cin >> bonus;
        cin.ignore();
        if (bonus == -1)
            employees.emplace_back(name, basic);
        else
            employees.emplace_back(name, basic, bonus);
    }
    cout << "\nEmployee Details:\n";
    for (const auto &emp : employees) {
        emp.displayDetails();
        cout << "----------------------\n";
    }
    return 0;
}
