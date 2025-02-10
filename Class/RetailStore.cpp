#include<iostream>
#include<string.h>
using namespace std;
struct InventoryManagement{
int id;
string name;
int total; 
int quantity;
int price;  
void Total()
{
    total=quantity*price;
}
void updateQuantity(int a)
{
    quantity= a*price;
}



};
int main()
{
    int X;
    InventoryManagement item1;
    item1.id=1;
    cout<<"Item Name: ";
    cin>>item1.name;
    cout<<"Quantity: ";
    cin>>item1.quantity;
    cout<<"Price: ";
    cin>>item1.price;
    item1.Total();
    item1.updateQuantity(X);
    cout<<"Item Added Succesfully ->";
    cout<<"Item ID: "<<item1.id<<endl;
    cout<<"Item Name: "<<item1.name<<endl;
    cout<<"Quantity: "<<item1.quantity<<endl;
    cout<<"Price: "<<item1.price<<endl;
    // cout<<"Item ID: "<<item1.id<<endl;
    // cout<<"Item Name: "<<item1.name<<endl;
    // cout<<"Quantity: "<<item1.quantity<<endl;
    // cout<<"Price: "<<item1.price<<endl;
    // cout<<"Total: "<<item1.total<<endl;
    
    
    cout<<"Item Added Succesfully Enter Successfully ->"<<endl;


    InventoryManagement item2;

    item2.id=2;
    cout<<"Item Name: ";
    cin>>item2.name;
    cout<<"Quantity: ";
    cin>>item2.quantity;
    cout<<"Price: ";
    cin>>item2.price;
    item2.Total();
    cout<<"Item Added Succesfully ->";
    cout<<"Item ID: "<<item2.id<<endl;
    cout<<"Item Name Of Second Product: "<<item2.name<<endl;
    cout<<"Quantity: "<<item2.quantity<<endl;
    cout<<"Price: "<<item2.price<<endl;
    cout<<"Total: "<<item2.total<<endl;

    cin >> X;
    if (X==1)
    {
    item1.updateQuantity(20);
    item1.Total();

    }
    else if (X==2)
    {
        item2.updateQuantity(20);
        item2.Total();

    }
    else 
    {
        cout<<"To Add neww item press 1 Or 2 :"<<endl;
    }

    return 0;
}
