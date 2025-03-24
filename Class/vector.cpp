#include <vector>  // Include vector library
#include <iostream>
using namespace std;

int main() {
    vector<int> numbers;  // Declaring an empty vector of integers
    numbers.push_back(10);  // Add 10 to the vector
    numbers.push_back(20);
    numbers.push_back(30);

    cout << "Vector elements: ";
    for (int num : numbers) 
        cout << num << " ";  // Output: 10 20 30
    
    cout << "\nSize: " << numbers.size();  // Output: 3
}
