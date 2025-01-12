#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[20];
    cout<<"Enter a string: ";
    cin.getline(str,20);
    int len = strlen(str);
    cout<<"Length of the string: "<<len<<endl;
    cout<<"Reversed string: ";
    for(int i=len-1; i>=0; i--)
    {
        cout<<str[i];
    }
    return 0;
}