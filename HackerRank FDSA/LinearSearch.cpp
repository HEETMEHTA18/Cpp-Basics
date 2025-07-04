#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int  c= 0;
  int Ls(int arr[],int n,int number)
    {
     
      for(int i=0;i<n;i++)
        {
        c++;
        if(arr[i]==number)
        {
            return i;
        }
        
            
        }
        return -1;
    }
int main() {
    int n ;
    int number;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>number;
    int LinearSearchValue;
    LinearSearchValue=Ls(arr,n,number);
    
    if(LinearSearchValue==-1)
    {
        cout<<"Element" << " "<<number<<" "<<"is not present in the array"<<endl;
        cout<<c;
    }
    else 
        
    {
        cout<<LinearSearchValue<<endl;
        cout<<c;
    }
   
    return 0;
}
