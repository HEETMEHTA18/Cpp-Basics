#include<iostream>
#include<stack>
using namespace std;
int main()

{
    stack<int> s;
    stack<int>s1;
    s.push(1);
    s.emplace(2);
    s.push(3);
    s.push(4);
    cout<<"top element:"<<s.top()<<endl;
    s.pop();
    s1.swap(s);
    cout<<"top element after pop:"<<s1.top()<<endl;
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }



    cout<<"size:"<<s.size()<<endl;
    cout<<"is stack empty:"<<s.empty()<<endl;
    cout<<"size of s1:"<<s1.size()<<endl;
    cout<<"is s1 empty:"<<s1.empty()<<endl;
    
    return 0;
}