#include<iostream>
#include<string>
using namespace std;
struct InventoryManagement
{
    string itemName;
    int quantity;
    double price;
    double total;
    void calculateTotal()
    {
        total=quantity*price;
    }
    void updateQuantity(int newQuantity)
    {
        quantity=newQuantity;
    }
};
int main()
{
    int X;
    //FIRST ITEM
    InventoryManagement item1;
    item1.itemName="Laptop";
    item1.quantity=10;
    item1.price=1500;
    item1.calculateTotal();
    cout<<"Item Name: "<<item1.itemName<<endl;
    cout<<"Quantity: "<<item1.quantity<<endl;
    cout<<"Price: $"<<item1.price<<endl;
    cout<<"Total: $"<<item1.total<<endl;
    cout<<"Item Name: "<<item1.itemName<<endl;  
    cout<<"Quantity: "<<item1.quantity<<endl;   
    cout<<"Price: $"<<item1.price<<endl;
    cout<<"Total: $"<<item1.total<<endl;
    cout<<endl;
    // cout<<" To Add neww item press 1: ";
    // cin >> X;
    // if (X==1)
    // {
    // item1.updateQuantity(20);
    // item1.calculateTotal();

    // }
    //SECOND ITEM
    InventoryManagement item2;
    item2.itemName="Laptop";
    item2.quantity=10;
    item2.price=1500;
    item2.calculateTotal();
    cout<<"Item Name: "<<item2.itemName<<endl;
    cout<<"Quantity: "<<item2.quantity<<endl;
    cout<<"Price: $"<<item2.price<<endl;
    cout<<"Total: $"<<item2.total<<endl;
    item2.updateQuantity(20);
    item2.calculateTotal();
    cout<<"Item Name: "<<item2.itemName<<endl;  
    cout<<"Quantity: "<<item2.quantity<<endl;   
    cout<<"Price: $"<<item2.price<<endl;
    cout<<"Total: $"<<item2.total<<endl;
    cout<<endl;
    cout<<" To Add neww item press 1: ";
    cin >> X;
    if (X==1)
    {
    item1.updateQuantity(20);
    item1.calculateTotal();

    }
    else
    {
        cout<<"To Add neww item press 1 :"<<endl;
    }
return 0;
}