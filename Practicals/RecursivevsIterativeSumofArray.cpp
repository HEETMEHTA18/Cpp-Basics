/*
Title: Performance Analysis - Recursive vs Iterative Sum of Array

This program dynamically accepts an array of integers from the user and computes
the sum of its elements using two methods:
  1. A recursive function that divides the problem into smaller sub-problems.
  2. An iterative function that sums the elements using a loop.

It also measures and displays the execution time of each approach for performance comparison.
*/

#include <iostream>
#include <vector>
#include <chrono>

using namespace std;

// Recursive function to compute sum from the current index to the end of the array.
int recursiveSum(const vector<int>& arr, int index) {
    if (index >= arr.size())
        return 0;
    return arr[index] + recursiveSum(arr, index + 1);
}

// Iterative function to compute the sum of all elements in the array.
int iterativeSum(const vector<int>& arr) {
    int sum = 0;
    for (int num : arr) {
        sum += num;
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " integer(s): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Measure execution time for recursive sum
    auto startRec = chrono::high_resolution_clock::now();
    int recSum = recursiveSum(arr, 0);
    auto endRec = chrono::high_resolution_clock::now();
    auto durationRec = chrono::duration_cast<chrono::microseconds>(endRec - startRec);

    // Measure execution time for iterative sum
    auto startIter = chrono::high_resolution_clock::now();
    int iterSum = iterativeSum(arr);
    auto endIter = chrono::high_resolution_clock::now();
    auto durationIter = chrono::duration_cast<chrono::microseconds>(endIter - startIter);

    cout << "\nRecursive Sum: " << recSum << "\n";
    cout << "Time taken (Recursive): " << durationRec.count() << " microseconds\n";
    cout << "\nIterative Sum: " << iterSum << "\n";
    cout << "Time taken (Iterative): " << durationIter.count() << " microseconds\n";

    return 0;
}
