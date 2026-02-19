#include<iostream>
using namespace std;

int main()
{
    int a=0;
    int b=1;
    int n;
    int t=0;
    cin>>n;
    t=t+4;
    for(int i=0;i<n-2;i++)
    {
        int c = a + b;
        a = b;
        b = c;
        t=t+3; 
    }
    cout<<a<<" "<<b<<endl;
    cout<<t<<endl;
    return 0;
}
