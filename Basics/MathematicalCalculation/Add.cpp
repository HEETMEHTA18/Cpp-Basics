#include<iostream>
using namespace std;
int add(int a , int b )
{
 return a+b;
}
int main()
{
    int a,b;
    cout<<"Enter The Value of the Number"<<endl;
    cin>>a>>b;
    cout<<"The Total Sum of the input is " <<add(a,b)<<endl;
    return 0;
}
