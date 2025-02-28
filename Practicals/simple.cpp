#include <iostream>
#include <vector>
#include <chrono>

using namespace std;
using namespace chrono;

// Recursive function to calculate sum
int recursiveSum(const vector<int>& arr, int n) {
    if (n == 0) 
        return 0;
    return arr[n - 1] + recursiveSum(arr, n - 1);
}

// Iterative function to calculate sum
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
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Measure execution time for recursive sum
    auto start = high_resolution_clock::now();
    int recSum = recursiveSum(arr, n);
    auto stop = high_resolution_clock::now();
    auto recDuration = duration_cast<microseconds>(stop - start);
    
    // Measure execution time for iterative sum
    start = high_resolution_clock::now();
    int iterSum = iterativeSum(arr);
    stop = high_resolution_clock::now();
    auto iterDuration = duration_cast<microseconds>(stop - start);
    
    // Display results
    cout << "Recursive Sum: " << recSum << " (Time: " << recDuration.count() << " microseconds)\n";
    cout << "Iterative Sum: " << iterSum << " (Time: " << iterDuration.count() << " microseconds)\n";
    
    return 0;
}
