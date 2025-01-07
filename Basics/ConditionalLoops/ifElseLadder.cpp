#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter Your Age Corretly"<<endl;
    cin>>age;
    if(age>=18) 
    {
        cout<<"You Are Eligible To Vote "<<age<<endl;

    }
    else{
        cout<<"You Are Not Eligible To Vote "<<age<<endl;
    }
    return 0;
}