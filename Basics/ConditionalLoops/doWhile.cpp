#include <iostream>
using namespace std;

int main() {
    int number;
    int sum = 0;

    cout << "Enter numbers to add (enter 0 to stop):\n";

    do {
        cout << "Enter a number: ";
        cin >> number;
        sum += number; // Add the number to the sum
    } while (number != 0); // Loop continues until 0 is entered

    cout << "The total sum is: " << sum << endl;

    return 0;
}
