#include <iostream>
using namespace std;
class students
{
    int marks;
    public:
    void getdata()
    {
        cout<<"Enter marks: ";
        cin>>marks;
    }
    students add (students m1)
    {

        students m3;
        m3.marks=m1.marks+marks;
        return m3;
    }
    void display()
    {
        cout<<"Total marks: "<<marks<<endl;
    }
};
int main()
{
    students s1,s2,s3;
    s1.getdata();
    s2.getdata();
    s3=s1.add(s2);
    s3.display();
    return 0;
}