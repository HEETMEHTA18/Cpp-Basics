#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string,int>m1;

    m1["apple"]=10;
    m1["banana"]=20;

    for(auto p: m1)
    {
        cout<<p.first<<" "<<p.second<<endl;

    }


   m1.erase("banana");
   m1.find("apple");
   m1.insert({"orange",30});
   m1["grape"]=25;
 
    for(auto p: m1)
    {
        cout<<p.first<<" "<<p.second<<endl;

    }


       return 0;
}