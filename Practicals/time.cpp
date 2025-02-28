#include<iostream>
using namespace std;
int addition(int input1,int input2)
{
    int add =input1+input2;
    return add;
}
int main()
{
    
    int input1,input2,add;
    cout<<"Enter Both Numbers"<<endl;
    cin>>input1>>input2;
    cout<<"Addition of two numbers is::"<<addition(input1,input2)<<endl;//using function
    cout<<"addition of two number is ::"<<add;

    for(int i=0;i<1;i++)
    {
        add+=input1+input2;
    }
    return 0;

}