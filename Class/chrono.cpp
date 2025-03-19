#include <iostream>
#include <chrono> // Include chrono for time measurement

using namespace std;
using namespace std::chrono; // Avoid writing std::chrono multiple times

int addition(int input1, int input2) {
    return input1 + input2;
}

int main() {
    int input1, input2;
    cout << "Enter Both Numbers: ";
    cin >> input1 >> input2;

    // Start measuring time
    auto start = high_resolution_clock::now();

    // Performing addition using function
    int result = addition(input1, input2);

    // Stop measuring time
    auto stop = high_resolution_clock::now();

    // Calculate elapsed time in microseconds
    auto duration = duration_cast<microseconds>(stop - start);

    // Display results
    cout << "Addition of two numbers is: " << result << endl;
    cout << "Time taken for function execution: " << duration.count() << " microseconds" << endl;

    return 0;
}
