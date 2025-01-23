#include<iostream>
using namespace std;
class Name
{
    private:
    string FullName;
    int age;
    int id;
    float experience;
    public:
    Name(string name,int age,int id,float exp):FullName(name),age(age),id(id),experience(exp)
    {
        cout<<"Name: "<<FullName<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Experience: "<<experience<<endl;
    }
};
int main()
{
Name obj1("John",25,101,2.5);
Name obj2("Heet",22,1000,2.0);
    return 0;
}