#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int>m1;

    m1.insert(1);
    m1.insert(2);
    m1.insert(2);
     m1.insert(3);

      m1.insert(4);

       m1.insert(5);

   cout<<" upper bound is :"<<*( m1.upper_bound(1));
   cout<<endl;
    for(auto p: m1)
    {
        cout<<p<<" ";
        cout<<endl;
    }

    m1.erase(2);
    
       return 0;

}