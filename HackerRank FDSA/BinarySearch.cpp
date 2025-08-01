#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
static int counter = 0;
using namespace std;
  int Binarysearch(int rollnumber[],int key,int l,int h)
    {
     counter++;
      if(l>h)
      {
      return -1;
      }
      int m =((l+h)/2);
      if(rollnumber[m]==key)
      {
          return m;
      }
      else if(rollnumber[m]>key)
      {
        return Binarysearch(rollnumber,key,l,m-1);
      }
     else
      {
          return Binarysearch(rollnumber,key,m+1,h);
      }
   }
int main() {
    int n,key;
    cin>>n;
   
    int rollnumber[n];
    int submissions[n];
    int index=0;
    
    for(int i=0;i<n;i++)
    {
        cin>>rollnumber[i]>>submissions[i];
    }
     cin>>key;
    index=Binarysearch(rollnumber,key,0,n-1);
    
    if(index==-1)
    {
        cout<<"Not submitted"<<endl;
    }
    else 
        
    {
        cout<<submissions[index]<<endl;
        cout<<counter;
    }
   
    return 0;
}