#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec={1,2,3,4,5,6,7,8,9,10};
    // vector<int>vec=(3,10);
    // vec.push_back(1);
    // vec.push_back(2);
    // vec.push_back(3);
    // vec.pop_back();
    // vec.emplace_back(11);
    // vec.erase(vec.begin());
    // vec.insert(vec.begin()+1,20);
    // vec.erase(vec.begin(),vec.begin()+2);
    // for(int val : vec)
    // {
    //     cout<<" "<<val;
    // }
    // cout<<endl;
    // cout<<"iterator to vector: ";
    // for(auto it=vec.begin();it!=vec.end();it++)
    // {
    //     cout<<" "<<*it;
    // }
    // cout<<endl;
    // cout<<"Size of vector is: "<<vec.size()<<endl;
    // cout<<"Capacity of vector is: "<<vec.capacity()<<endl;
    // cout<<"Max size of vector is: "<<vec.max_size()<<endl;
    // cout<<"front element:"<<vec.front()<<endl;
    // cout<<"back element:"<<vec.back()<<endl;
    // // cout<<"Element at index 2: "<<vec.at(2)<<endl;
    // // cout<<"Element at index 5: "<<vec[5]<<endl;
    // // cout<<"is vector empty:"<<(vec.empty()?"yes":"no");
    // vec.clear();
    // cout<<"Size of vector after clear: "<<vec.size()<<endl;
    // cout<<"Capacity of vector after clear: "<<vec.capacity()<<endl;
    //  cout<<"is vector empty:"<<(vec.empty()?"yes":"no");


   for( auto it=vec.begin(); it !=vec.end() ;it++)
    {
        cout<<" "<<*(it);

    }
    cout<<endl;
    for( auto it=vec.rbegin(); it !=vec.rend() ;it++)
    {
        cout<<" "<<*(it);

    } 
    return 0;

}