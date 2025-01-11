#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str1[10];
    char str2[10];
    cout<<"Enter the first string: ";
    cin.getline(str1,10);
    cout<<"Enter the second string: ";
    cin.getline(str2,10);
    cout<<"Lenght of string OF 1: "<<strlen(str1)<<endl;
    cout<<"Length of string OF 2: "<<strlen(str2)<<endl;
    return 0;

}