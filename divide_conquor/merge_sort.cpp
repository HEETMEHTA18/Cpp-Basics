// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int s_merge(int arr[], int first, int middle, int last)
// {
//     int n1 = middle - first + 1;
//     int n2 = last - middle;
    
//     int left[n1], right[n2];
//     int temp[n1+n2];
//     for(int i = 0; i < n1; i++)
//         left[i] = arr[first + i];
//     for(int j = 0; j < n2; j++)
//         right[j] = arr[middle + 1 + j];
        
//     int i = 0, j = 0, k = first;
    
//     while(i < n1 && j < n2)
//     {
//         if(left[i] <= right[j])
//         {
//             arr[k] = left[i];
//             i++;
//         }
//         else
//         {
//             arr[k] = right[j];
//             j++;
//         }
//         k++;
//     }
    
//     while(i < n1)
//     {
//         arr[k] = left[i];
//         i++;
//         k++;
//     }
    
//     while(j < n2)
//     {
//         arr[k] = right[j];
//         j++;
//         k++;
//     }
// for(int i = 0; i < n1 + n2; i++)
//     arr[first+i] = temp[i];

//     return 0;

// }

// int two_way_merge(int arr[], int first, int last)
// {
//     int size = last - first +1;
    
//     if(size<=1)
//     return 0;


//     int middle = first + (last - first) / 2;
    
//     two_way_merge(arr,first,middle);
// //for the first half of the array
//     two_way_merge(arr,middle+1,last);
//     //for the second  half of the array
    
//     s_merge(arr,first,middle+1,last);
// }

// int main() {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i =0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
    
//     int first = 0;
//     int last = n-1;

//     two_way_merge(arr,first,last);
    


//      for(int i =0;i<n;i++)
//     {
//         cout<<arr[i];
//     }
// //input is done 
    
    
    
    
    
    
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

void s_merge(int arr[], int first, int middle, int last)
{
    int n1 = middle - first + 1;
    int n2 = last - middle;

    int left[n1], right[n2];

    for(int i = 0; i < n1; i++)
        left[i] = arr[first + i];

    for(int j = 0; j < n2; j++)
        right[j] = arr[middle + 1 + j];

    int i = 0, j = 0, k = first;

    while(i < n1 && j < n2)
    {
        if(left[i] <= right[j])
            arr[k++] = left[i++];
        else
            arr[k++] = right[j++];
    }

    while(i < n1)
        arr[k++] = left[i++];

    while(j < n2)
        arr[k++] = right[j++];
}

void two_way_merge(int arr[], int first, int last)
{
    if(first >= last)
        return;

    int middle = first + (last - first) / 2;

    two_way_merge(arr, first, middle);
    two_way_merge(arr, middle + 1, last);

    s_merge(arr, first, middle, last);
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    two_way_merge(arr, 0, n - 1);

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
