#include <bits/stdc++.h>
using namespace std;

int partition_qs(int arr[], int first, int last)
{
    int pivot = arr[last];
    int i = first - 1;

    for(int j = first; j < last; j++)
    {
        if(arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[last]);
    return i+1;
}

void quicksort(int arr[], int first, int last)
{
    if(first < last)
    {
        int p = partition_qs(arr, first, last);
        quicksort(arr, first, p-1);
        quicksort(arr, p+1, last);
    }
}
void merge_arr(int arr[], int first, int mid, int last)
{
    int n1 = mid - first + 1;
    int n2 = last - mid;

    vector<int> left(n1), right(n2);

    for(int i=0;i<n1;i++)
        left[i] = arr[first+i];

    for(int j=0;j<n2;j++)
        right[j] = arr[mid+1+j];

    int i=0,j=0,k=first;

    while(i<n1 && j<n2)
    {
        if(left[i] <= right[j])
            arr[k++] = left[i++];
        else
            arr[k++] = right[j++];
    }

    while(i<n1)
        arr[k++] = left[i++];

    while(j<n2)
        arr[k++] = right[j++];
}

void mergesort(int arr[], int first, int last)
{
    if(first >= last)
        return;

    int mid = (first + last)/2;

    mergesort(arr, first, mid);
    mergesort(arr, mid+1, last);

    merge_arr(arr, first, mid, last);
}

int main()
{
    int n;
    cin >> n;
    int arr1[n];

    for(int i=0;i<n;i++)
        cin >> arr1[i];

    int m;
    cin >> m;
    int arr2[m];

    for(int i=0;i<m;i++)
        cin >> arr2[i];

    quicksort(arr1, 0, n-1);
    mergesort(arr2, 0, m-1);

    cout << "Quick sort: ";
    for(int i=0;i<n;i++)
        cout << arr1[i] << " ";
    cout << endl;

    cout << "Merge sort: ";
    for(int i=0;i<m;i++)
        cout << arr2[i] << " ";
    cout << endl;
}