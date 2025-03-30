#include <array_lib.h>
#include<iostream>
using namespace std;
class Array{
  int arr[3];
  int size;
  public:
  Array(){ size=0;}
   

};
int main()
{
    Array arr;
    int choice, value;
     arr.add(5);
     arr.add(6);
     arr.add(7);
    arr.display();
    arr.remove(6);
    arr.display();
    arr.search(5);
    arr.clear();
    return 0;
}