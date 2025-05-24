#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int>l={1,2,3,4,5,6,7,8,9,10};
    // l.push_back(2);
    // l.push_back(3);
    // l.emplace_back(5);
    // l.pop_back();
    l.push_front(1);
    l.pop_front();
    for(auto it=l.begin();it!=l.end();it++)
    {
        cout<<" "<<*(it);
    } 
    return 0;
}/// here all the same operations are performed as in vector but the difference is that in list we can only access the elements using iterators and not by index.