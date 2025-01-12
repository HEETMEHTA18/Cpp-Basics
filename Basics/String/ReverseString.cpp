#include <iostream>
#include <string>
#include <algorithm> // for std::reverse

using namespace std;

int main() {
    // Take input from the user
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    // Reverse the string
    string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end());

    // Output the reversed string
    cout << "Reversed string: " << reversedStr << endl;

    return 0;
}