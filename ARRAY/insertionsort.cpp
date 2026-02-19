#include<bits/stdc++.h>
using namespace std;

int insertionsort(int arr[],int n)
{
    int comparisons=0;
    for(int i=1;i<n;i++)
    {
        int key = arr[i];
        int j = j-1;
        while(j>=0)
        {
            comparisons++;
            if(arr[j]>key)
            {
                arr[j+1] = arr[j];
                j = j-1;
            }
            else
            {
                break;
            }
        }
        arr[j+1]=key;
    }
    return comparisons;
}
int main()  
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int comparisons = insertionsort(arr,n);
    cout<<"Sorted array: "; 
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}