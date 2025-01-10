#include<iostream>
using namespace std;
int main()
{
    int arr[5],q=0;
   cout<<arr[0];
   cout<<"Enter The Value"<<endl;
//    cin>>arr[2];
for(int j=0 ; j<5;j++)
{
    cin>>arr[j];
}
for(int j=0 ; j<5;j++)
{
    cout<<"Entered Value is: "<<arr[j]<<endl;
}
do {
    cout<<"Enter The Value Of Data";
    cin>>arr[q];
    q++;
    if(q==5){
        for(int z=0;z<5;z++){
         cout<<"Entered Value is: "<<arr[q]<<endl;
        }
    }
}
while(q<5);
    return 0;
}