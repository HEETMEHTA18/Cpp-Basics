#include<iostream>
#include<queue>
using namespace std;
int main()

{
    queue<int> q;
    // stack<int>s1;
    q.push(1);
    q.emplace(2);
    q.push(3);
    q.push(4);

    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }



    // cout<<"size:"<<q.size()<<endl;
    // cout<<"is stack empty:"<<q.empty()<<endl;
    // cout<<"size of s1:"<<s1.size()<<endl;
    // cout<<"is s1 empty:"<<s1.empty()<<endl;
    
    return 0;
}