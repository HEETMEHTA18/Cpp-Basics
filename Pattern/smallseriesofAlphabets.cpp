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
        cout << (char)(k + 95) << " ";
        }
        cout<<"\n";
    }
    return 0;
}