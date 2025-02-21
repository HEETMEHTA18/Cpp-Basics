#include <iostream>
using namespace std;

class Student {
private:
    int rollNumber;
    string name;
    float marks[3];

public:
    Student() : rollNumber(0), name("Default Student"), marks{0, 0, 0} {}
    
    Student(int r, string n, float m1, float m2, float m3) : rollNumber(r), name(n) {
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
    }
    
    float calculateAverage() const {
        return (marks[0] + marks[1] + marks[2]) / 3.0;
    }
    
    void displayDetails() const {
        cout << "----------------------" << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks[0] << ", " << marks[1] << ", " << marks[2] << endl;
        cout << "Average Marks: " << calculateAverage() << endl;
        cout << "----------------------" << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    cout << "Predefined  details of the students:" << endl;
    Student students[] = {
        Student(2, "HEET", 20, 20, 20),//compile time intialization
        Student(3, "URVAL", 30, 30, 30),
        Student(4, "ARYAN", 40, 40, 40),
        Student(5, "OM", 50, 50, 50)
    };


    for (int i = 0; i < 4; i++) {
        students[i].displayDetails();
    }
    
    cout<<"*Enter the  deatils of the students ::*"<<endl;
    cout<<endl;
    
    Student student [n];//dyanic entry of the students and the run time intialization
    for(int i = 0; i < n; i++) {
        int rollNumber, marks1, marks2, marks3;
        string name;
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Marks for 3 subjects: ";
        cin >> marks1 >> marks2 >> marks3;
        student[i] = Student(rollNumber, name, marks1, marks2, marks3);
    }
    for (int i = 0; i < n; i++) {
        if(i==0)
        {
        student[i]=Student();
        }
        else
        {
            student[i].displayDetails();
        }
    }
   



    return 0;
}
