#include<iostream>
#include<vector>
#include<string>
using namespace std;
class person
{
    string name;
    public:
    void getname(string)
    {
        cout<<"enter name";
        cin>>name;
        
    }
    void display(string)
    {
        cout<<"name is";

        cout<<name;
        
    }
};
int main()
{
//     person p;
    vector<person>name;
    name.emplace_back("jhon");
    name.emplace_back("doe");

    for (const auto & : name) {
        name.display();
        cout << "----------------------" << endl;
    }

    return 0;
}
