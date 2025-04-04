#include<iostream>
#include<string.h>

using namespace std;
class person//ALWAYS THE BASE CLASS CONSTRUCTOR IS CALLED AND INTIALIZED FIRST
{
string name;
int age;
public:
void getdetails()
{
    cout<<"Enter Name:";
    cin>>name;
    cout<<"Enter Age:";
    cin>>age;

}
void showdetails()
{
    cout<<"Name:"<<name<<endl;
    cout<<"Age:"<<age<<endl;
}

};
class employee : public manager
{
    string designation;
    int empsalary;
    public:
    void getdetails()
    {
        manager::getdetails();
        cout<<"Enter Designation:";
        cin>>designation;
        cout<<"Enter Salary:";
        cin>>empsalary;
    }
    void showdetails()
    {
        manager::showdetails();
        cout<<"Designation:"<<designation<<endl;
        cout<<"Salary:"<<empsalary<<endl;
    }

};
class manager: public person
{
    string department;
    int salary;
    public:
    void getdetails()
    {
        person::getdetails();
        cout<<"Enter Department:";
        cin>>department;
        cout<<"Enter Salary:";
        cin>>salary;
    }
    void showdetails()
    {
        person::showdetails();
        cout<<"Department:"<<department<<endl;
        cout<<"Salary:"<<salary<<endl;
    }
};

int main()
{
   employee E;
   E.getdetails();  
    cout<<endl;

    return 0;
}