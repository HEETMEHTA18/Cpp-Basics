#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1 ; j<n+1-j; j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}