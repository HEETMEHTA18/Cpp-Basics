#include<iostream>
using namespace std;

int fact(int n)
{
    int c=0;
    c++;
    if(n==0 || n==1)
        return 1;
    else
{        return n*fact(n-1);}
        cout<<c<<endl;
}
int main()
{
    int n;
    cin>>n;
    // int f=1;
    // int c=0;
    // c=c+3;
    // for(int i=1;i<=n;i++)
    // {
    //     f=f*i;
    //     c=c+3;
    // }
    // cout<<f<<endl;
    // itreative veersion approach 


    int result=fact(n);    cout<<result<<endl;

    return 0;
}