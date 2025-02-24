#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Employee {
private:
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
        cout << "Name: " << name << endl;
        cout << "Basic Salary: $" << basicSalary << endl;
        cout << "Bonus: $" << bonus << endl;
        cout << "Total Salary: $" << getTotalSalary() << endl;
    }
};

int main() {
    vector<Employee> employees;

    employees.emplace_back("John Doe", 5000.0);
    employees.emplace_back("Jane Smith", 6000.0);
    employees.emplace_back("Alice Johnson", 7000.0, 1500.0);

    for (const auto &emp : employees) {
        emp.displayDetails();
        cout << "----------------------" << endl;
    }
    
    return 0;
}
