#include<iostream>
using namespace std;
int Count = 0;

int fibo(int n)
{   
    Count++;  
    
    if(n==0 || n==1)
        return 1;
    else
    {
        Count++;
        return fibo(n-1) + fibo(n-2);
    }
}

int main()
{
    int n;
    cin >> n;
    
    Count = 0; 
    int result = fibo(n);
    
    cout<<result << endl;
    cout << Count << endl;
    
    return 0;
}