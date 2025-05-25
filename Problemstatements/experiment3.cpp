#include<iostream>
#include<string>
using namespace std;

class Personn
{
protected:
    string name;
    int age;
public:
    Personn(string n, int a) : name(n), age(a) {}
    virtual void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
    virtual ~Personn() {}
};

class Employee : public Personn
{
protected:
    int emp_id;
public:
    Employee(string n, int a, int id) : Personn(n, a), emp_id(id) {}
    void display() override {
        Personn::display();
        cout << "Employee ID: " << emp_id << endl;
    }
};

class Manager : public Employee
{
    string department;
public:
    Manager(string n, int a, int id, string dept = "Unassigned")
        : Employee(n, a, id), department(dept) {}
    void setDepartment(string dept) {
        department = dept;
    }
    void display() override {
        Employee::display();
        cout << "Department: " << department << endl;
    }
};


class Shape
{
    public:
    virtual void Area()=0;
};
class Circle : public Shape
{
    double radius;

public:
    Circle(double r) : radius(r) {}
    void Area() override {
        cout << "Area of Circle: " << 3.14 * radius * radius << endl;
    }

};
class Rectangle : public Shape
{
    double length, width;
    public:
       Rectangle(double l,double b) : length(l),width(b) {}
    void Area() override {
        cout << "Area of Rectangle:: " << length * width << endl;
    }
};

int main()
{
    Manager m("John Doe", 30, 101);
    m.setDepartment("Sales");

    Personn* ptr = &m;
    ptr->display(); 
    
    Shape* s1=new Circle(5.0);
    Shape* s2=new Rectangle(4.0,5.0);
    s1->Area();
    s2->Area();
    cout << endl;
    delete s1;
    delete s2;
    return 0;
}