#include <iostream>
using namespace std;

void printSorted(int arr1[], int arr2[], int n, int swaps)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " " << arr2[i] << endl;
    }
    cout << swaps << endl;
       cout << arr1[0] << "," << arr1[1] << endl;
}

void Bubblesort(int arr1[], int arr2[], int n)
{
    int swaps = 0, comparisons = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            comparisons++;
            if (arr2[j] > arr2[j + 1])
            {
                swap(arr2[j], arr2[j + 1]);
                swap(arr1[j], arr1[j + 1]);
                swaps++;
            }
        }
    }
    printSorted(arr1, arr2, n, swaps);
}

void Selectionsort(int arr1[], int arr2[], int n)
{
    int swaps = 0, comparisons = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            comparisons++;
            if (arr2[j] < arr2[min_idx])
            {
                min_idx = j;
            }
        }
        if (min_idx != i)
        {
            swap(arr2[i], arr2[min_idx]);
            swap(arr1[i], arr1[min_idx]);
            swaps++;
        }
    }
    printSorted(arr1, arr2, n, swaps);
}

int main()
{
    int n;
    cin >> n;
    int roll_no[n], submissiontime[n];
    for (int i = 0; i < n; i++)
    {
        cin >> roll_no[i] >> submissiontime[i];
    }
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
        Bubblesort(roll_no, submissiontime, n);
        break;
    case 2:
        Selectionsort(roll_no, submissiontime, n);
        break;
    }
    return 0;
}