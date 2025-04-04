#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {}

    virtual void display() {
        cout << "Name: " << name << "\nAge: " << age << endl;
    }

    virtual ~Person() {}
};

class Employee : public Person {
protected:
    int employeeID;

public:
    Employee(string n, int a, int id) : Person(n, a), employeeID(id) {}

    void display() override {
        Person::display();
        cout << "Employee ID: " << employeeID << endl;
    }

    int getID() const {
        return employeeID;
    }

    virtual ~Employee() {}
};

class Manager : public Employee {
    string department;

public:
    Manager(string n, int a, int id, string dept)
        : Employee(n, a, id), department(dept) {}

    void display() override {
        Employee::display();
        cout << "Department: " << department << endl;
    }

    ~Manager() {}
};

map<int, Manager*> managerMap;
vector<Manager*> managerList;

void addManager(Manager* m) {
    managerMap[m->getID()] = m;
    managerList.push_back(m);
}

void getManagerByID(int id) {
    if (managerMap.find(id) != managerMap.end()) {
        cout << "\nManager found:" << endl;
        managerMap[id]->display();
    } else {
        cout << "\nManager with ID " << id << " not found." << endl;
    }
}

void displayAllManagers() {
    cout << "\nAll Managers:" << endl;
    for (Manager* m : managerList) {
        m->display();
        cout << "--------" << endl;
    }
}

int main() {
    Manager* m1 = new Manager("Alice", 35, 1001, "Finance");
    Manager* m2 = new Manager("Bob", 40, 1002, "HR");

    addManager(m1);
    addManager(m2);

    displayAllManagers();
    getManagerByID(1002);

    // Clean up
    for (Manager* m : managerList) {
        delete m;
    }

    return 0;
}
