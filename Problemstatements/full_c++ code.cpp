#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <memory>
#include <algorithm>
using namespace std;

// ---------- Unit 4: Class & Inheritance ----------
class Person {
protected:
    string name;
    int age;

public:
    Person(string n = "Unknown", int a = 0) : name(n), age(a) {}
    virtual void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
    virtual ~Person() {}
};

class Student : public Person {
    int rollNo;
    float marks;

public:
    Student(string n, int a, int r, float m)
        : Person(n, a), rollNo(r), marks(m) {}

    void display() override {
        cout << "[Student] " << name << ", Roll: " << rollNo << ", Marks: " << marks << endl;
    }

    float getMarks() const { return marks; }
    int getRoll() const { return rollNo; }
};

// ---------- Unit 2: Function Overloading ----------
void greet() {
    cout << "Hello, Student!" << endl;
}

void greet(string name) {
    cout << "Hello, " << name << "!" << endl;
}

// ---------- Unit 2: Function Template ----------
template <typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}

// ---------- Unit 3: File I/O ----------
void saveToFile(const Student& s) {
    ofstream file("student.txt", ios::app);
    if (file.is_open()) {
        file << "Student - Roll: " << s.getRoll() << ", Marks: " << s.getMarks() << "\n";
        file.close();
    }
}

// ---------- Unit 6: Exception Handling ----------
void checkEligibility(float marks) {
    if (marks < 0 || marks > 100)
        throw invalid_argument("Invalid marks!");
    if (marks < 35)
        throw runtime_error("Student failed!");
}

// ---------- Unit 5 & 7: STL + Smart Pointer ----------
void manageStudents() {
    vector<shared_ptr<Student>> students;

    students.push_back(make_shared<Student>("Alice", 20, 101, 88.5));
    students.push_back(make_shared<Student>("Bob", 21, 102, 92.3));
    students.push_back(make_shared<Student>("Eve", 19, 103, 77.0));

    map<int, float> rollToMarks;

    for (auto& s : students) {
        try {
            checkEligibility(s->getMarks());
            s->display();
            saveToFile(*s);
            rollToMarks[s->getRoll()] = s->getMarks();
        } catch (const exception& e) {
            cerr << "Error: " << e.what() << endl;
        }
    }

    cout << "\n--- Sorted Students by Roll No ---\n";
    for (auto& entry : rollToMarks) {
        cout << "Roll: " << entry.first << ", Marks: " << entry.second << endl;
    }
}

// ---------- Unit 1: main function ----------
int main() {
    greet();
    greet("Developer");

    cout << "Max (int): " << maximum(10, 20) << endl;
    cout << "Max (float): " << maximum(3.14f, 2.71f) << endl;

    manageStudents();

    return 0;
}
