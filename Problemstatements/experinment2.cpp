#include<iostream>
using namespace std;

template<typename T>
T maxValues(T a,T b)
{
    return(a> b ?  a: b);
}

int sum(int a ,int b)
{
    return a+b;
}

class Salary
{
    double salary;
    double bonus;
    public:
    Salary(double s =1000,double b=0)
    {
        salary=s;
        bonus=b;
        salary = salary + bonus;
    }
    void display()
    {
        cout<<"Salary is:"<<salary<<endl;
        cout<<"Bonus is:"<<bonus<<endl;
    }
    friend double salary(Salary s);
    friend double bonus(Salary s);
};
 double salary(Salary s)
{
    return s.salary;
}
 double bonus(Salary s)
{
    return s.bonus;
}
int main()
{
    Salary s1(1000.0,200.0);
    Salary s2(2000.0,300.0);
    cout<<"Values Of A and B are:"<<maxValues(10,20)<<endl;
    cout<<"Values Of A and B are:"<<maxValues(10.5,20.5)<<endl;
    cout<<"Values Of A and B are:"<<maxValues('A','B')<<endl;
   
    s1.display();
    s2.display();
         
    salary(s1);
    bonus(s1);
    salary(s1);
    bonus(s2);
    cout<<"Salary of s1 is:"<<salary(s1)<<endl;
    cout<<"Bonus of s1 is:"<<bonus(s1)<<endl;

       return 0;
}