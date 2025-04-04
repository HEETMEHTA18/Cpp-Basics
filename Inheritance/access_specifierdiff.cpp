#include <iostream>
using namespace std;

class Hello
{
private:
    void display()
    {
        cout << "Hello World" << endl;
    }

protected:
    void display1()
    {
        cout << "Hello World" << endl;
    }

public:
void display2()
    {
        cout << "Hello World" << endl;
    }
    
};
 class B :public Hello
 {


 };
 int main()
 {
    B object;
    cout<<"PRIVATE ACCESS SPECIFIER"<<endl;
    object.display();
    cout<<"PROTECTED ACCESS SPECIFIER"<<endl;   
    object.display1();
    cout<<"PUBLIC ACCESS SPECIFIER"<<endl;
    object.display2();
    
    return 0;
 }