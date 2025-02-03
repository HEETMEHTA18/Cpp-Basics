#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter The Value Of N:: ";
    cin>>n;
    for(int i=0 ; i<=n ;i++)
    {
        for(int j=0 ; j<=i; j++)
        {
            if(i%2==0)
            {
                cout<<(char)(65+j);
            }
            else
            {
                cout<<j;
            }
        }
        cout<<endl;
    }
    return 0;

}   