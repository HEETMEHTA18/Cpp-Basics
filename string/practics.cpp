#include<iostream>
using namespace std;
class Date
{
    int dd,mm,yyyy;
    public:
    void getdata()
    {
        cout<<"Enter date in dd/mm/yyyy format: ";
        cin>>dd>>mm>>yyyy;
    }
    void putdata()
    {
        cout<<"Date is: "<<dd<<"/"<<mm<<"/"<<yyyy<<endl;
    }
    friend int swap_data(Date A);
};
 int swap_data(Date &A,Date &B)
{
    Date temp;
    temp=A;
    A=B;
    B=temp;

    
}
int main()
{
    Date A,B;
    A.getdata();
    B.putdata();
    cout<<"After swapping date is: "<<endl;
    A.putdata();
    B.putdata();
    
    swap_data(A,B);
    return 0;
}