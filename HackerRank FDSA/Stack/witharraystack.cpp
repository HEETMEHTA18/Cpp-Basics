#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

const int number=100;
// cin>>number;
 int Stack[number];
int top=-1;

void push(int n)
{
    if(top == sizeof(Stack) )
        cout<<"stack overflow";
    else 
    {
        top++;
        Stack[top]=n;
    }
    
}

int pop()
{
    int x;
    if(top==-1)
    {
       return -1;
    }
    else 
    {
        x=Stack[top];
        top--;
        return x;
    }
    

}
int peek()
{
    int x;
    if(top==-1)
    {
        return -1;
    }
    else 
    {
        x=Stack[top];
    }
    return x;

}
void isEmpty()
{
    if(top==-1)
        cout<<1<<endl;
    else 
        cout<<0<<endl;
}
int main() {
   int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int choice;
        cin>>choice;
        int x;
        switch(choice)
        {
            case 1:
                cin>>x;
                push(x);
                break;
                
            case 2:
                x=pop();
                cout<<x<<endl;
                break;
            case 3:
                x=peek();
                cout<<x<<endl;
                break;
            case 4:
                isEmpty();
                break;
        }
    }
    
    return 0;
}
