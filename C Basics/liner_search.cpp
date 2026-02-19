#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,key;
    cin>>n>>key;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int t=0;
    for(int i=0;i<n;i++)
    {
        t=t+1;
        if(arr[i]==key)
        {
            cout<<"Element found at index "<<i<<endl;
            cout<<t<<endl;
            return 0;
        }
    }
    cout<<"Element not found"<<endl;
    cout<<t<<endl;
    return 0;
}