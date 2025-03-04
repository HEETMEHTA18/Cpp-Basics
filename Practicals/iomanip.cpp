#include <iostream>
#include <string>
#include <iomanip>  // Added for formatted output

using namespace std;

// Function to reverse a string
string reverseString(string str) {
    int n = str.length();
    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
    return str;
}

// Function to toggle case of each character
string toggleCase(string str) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // Convert to uppercase
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;  // Convert to lowercase
        }
    }
    return str;
}

// Function to calculate string length (without using built-in length function)
int stringLength(string str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// Function to concatenate two strings (without using + operator)
string concatenateStrings(string str1, string str2) {
    string result = str1;
    for (int i = 0; str2[i] != '\0'; i++) {
        result += str2[i];
    }
    return result;
}

int main() {
    string str1, str2;

    cout << "Enter a string: ";
    getline(cin, str1);

    cout << setw(25) << left << "Reversed String: " << reverseString(str1) << endl;
    cout << setw(25) << left << "Toggled Case String: " << toggleCase(str1) << endl;
    cout << setw(25) << left << "String Length: " << stringLength(str1) << endl;

    cout << "Enter another string: ";
    getline(cin, str2);

    cout << setw(25) << left << "Concatenated String: " << concatenateStrings(str1, str2) << endl;

    return 0;
}
