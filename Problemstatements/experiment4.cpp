#include<iostream>
using namespace std;
class Number
{
    int a,b;
    public:
    Number(int x,int y):a(x),b(y)  {}
    void display()
    {
        cout<<"The value of a is: "<<a<<endl;
        cout<<"The value of b is: "<<b<<endl;
    }
    Number operator +(const Number &obj)
    {
        return Number(a + obj.a, b + obj.b);
    }
    
    Number operator -(const Number &obj)
    {
        // Number Temp;
        // Temp.a=a-obj.a;
        // Temp.b=b-obj.b;
        return Number(a - obj.a, b - obj.b);
    }
    bool operator ==(const Number &obj)
    {
        return (a == obj.a, b == obj.b);
    }
};


int main()
{
    Number n1(10,20);
    Number n2(30,40);
    Number n3(10,10);
    n1.display();
    n2.display();
    n3.display();
    
    // n1.display();
    // n2.display();
    // Number n4 = n1 + n2;
    // cout << "After Addition:" << endl;
    // n4.display();
    
    // Number n5 = n1 - n2;
    // cout << "After Subtraction:" << endl;
    // n5.display();




}
