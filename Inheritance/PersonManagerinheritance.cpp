#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person() {}

    Person(string n, int a) : name(n), age(a) {}

    virtual void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    void setPerson(string n, int a) {
        name = n;
        age = a;
    }
};

class Employee : public Person {
protected:
    int employeeID;

public:
    Employee() {}

    Employee(string n, int a, int id) : Person(n, a), employeeID(id) {}

    void display() override {
        Person::display();
        cout << "Employee ID: " << employeeID << endl;
    }

    void setEmployee(string n, int a, int id) {
        setPerson(n, a);
        employeeID = id;
    }

    int getID() const {
        return employeeID;
    }
};

class Manager : public Employee {
    string department;

public:
    Manager() {}

    Manager(string n, int a, int id, string dept)
        : Employee(n, a, id), department(dept) {}

    void display() override {
        Employee::display();
        cout << "Department: " << department << endl;
    }

    void setManager(string n, int a, int id, string dept) {
        setEmployee(n, a, id);
        department = dept;
    }

    int getID() const {
        return employeeID;
    }
};

int main() {
    const int SIZE = 2;
    Manager managers[SIZE];

    for (int i = 0; i < SIZE; ++i) {
        string name, department;
        int age, empID;

        cout << "\nEnter details for Manager #" << (i + 1) << endl;
        cout << "Name: ";
        cin.ignore(); 
        getline(cin, name);

        cout << "Age: ";
        cin >> age;

        cout << "Employee ID: ";
        cin >> empID;

        cout << "Department: ";
        cin.ignore(); 
        getline(cin, department);

        managers[i].setManager(name, age, empID, department);
    }

    cout << "\n--- Manager Details ---\n";
    for (int i = 0; i < SIZE; ++i) {
        managers[i].display();
        cout << "------------------------\n";
    }

    return 0;
}
