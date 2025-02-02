#include <iostream>
using namespace std;
int main()
{
    int i;
    cout << "Enter The Number :: ";
    cin >> i;
    for (int k = 1; k < i; k++)
    {
        for(int j = 1; j <= i; j++)
        {
        cout << (char)(j + 64) << " ";
        }
        cout<<"\n";
    }
    return 0;
}