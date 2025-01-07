#include<iostream>
#define PI 3.14
using namespace std;
int main()
{
    int radius;
    float area;
    cout<<"Enter The  Value Of The Radius of the circle"<<endl;
    cin>>radius;
    area=(PI*radius*radius);
    cout<<"The Area of the circle is "<<area;
    return 0;
}