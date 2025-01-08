#include<iostream>
using namespace std;
inline int add(int a , int b )
{
return a+b;
}
inline int multiply(int a , int b )
{
return a*b;
}
inline int sub(int a , int b )
{
return a-b;
}
inline float division(float a , float b)
{
return a/b;
}
inline float modul(int a, int b)
{
return a%b;
}

int main()
{
    int a,b;
    cout<<"Enter The Value of the Number"<<endl;
    cin>>a>>b;
    cout<<"The Total Sum of the input is " <<add(a,b)<<endl;
    cout<<"The Total Subtraction of the input is " <<sub(a,b)<<endl;
    cout<<"The Total Division of the input is " <<division(a,b)<<endl;
    cout<<"The Total Multiply of the input is " <<multiply(a,b)<<endl;
    cout<<"The Total Modulus of the input is " <<modul(a,b)<<endl;
    return 0;
}
