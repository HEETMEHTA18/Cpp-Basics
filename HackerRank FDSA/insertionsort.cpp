#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int insertionSort(int arr[], int n)
{
    int j,key;
    for (int i = 2; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j > 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            arr[j + 1] = key;
        }
        
    }
}
int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
