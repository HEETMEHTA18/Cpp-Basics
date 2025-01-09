#include<iostream>
using namespace std;
 int main()
 {
    int itemnumber,total=0;
    cout<<"welcome To The Restaurent"<<endl<<"What Do You Like To Have"<<endl<<"Enter The Number of the selected item on the screen"<<endl;
    cin>>itemnumber;
    cout<<"To Add Burger press 1"<<endl<<"To Add Mocktail press 2"<<endl<<"To Add Sandwitch press 3"<<endl<<"To Add Pizza press 4"<<endl<<"To End The Order press 0"<<endl;
   
 for(int i = 0 ; i<10; i++)
 {
    
 }
    switch(itemnumber)
    {
           case 0:
        {
            cout<<"Thank You For Odering"<<total<<endl;
            
            break;
        }
        
        case 1:
        {
            cout<<"Burger Added"<<endl;
            total+=120;
            break;
        }
           case 2:
        {
            cout<<"Mocktail Added"<<endl;
            total+=20;
            break;
        }
           case 3:
        {
            cout<<"SandWitch Added"<<endl;
            total+=80;
            break;
        }
           case 4:
        {
            cout<<"Pizza Added"<<endl;
            total+=220;
            break;
        }

        default:
        {
            cout<<"Enter Valid Number"<<endl;
        }
    }
    return 0;
}