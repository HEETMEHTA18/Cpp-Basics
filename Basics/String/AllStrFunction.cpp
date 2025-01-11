#include <iostream>
#include <string>
#include <algorithm> // For reverse
#include <sstream>   // For stringstream
#include <cctype>    // For toupper
using namespace std;

int main() {
    // 1. Input a string using `getline`
    string str;
    cout << "Enter a string: ";
    getline(cin, str); // Read entire line

    // 2. Print the length of the string
    cout << "Length of the string: " << str.length() << endl;

    // 3. Concatenate two strings
    string str2 = " Concatenated!";
    string concatenated = str + str2;
    cout << "After concatenation: " << concatenated << endl;

    // 4. Access characters in the string
    cout << "First character: " << str[0] << endl;
    if (!str.empty()) {
        cout << "Last character: " << str[str.length() - 1] << endl;
    }

    // 5. Extract a substring
    if (str.length() >= 5) {
        string substring = str.substr(0, 5); // First 5 characters
        cout << "Substring (first 5 characters): " << substring << endl;
    }

    // 6. Find a substring
    size_t pos = str.find("World");
    if (pos != string::npos) {
        cout << "'World' found at position: " << pos << endl;
    } else {
        cout << "'World' not found in the string." << endl;
    }

    // 7. Replace a substring
    string modified = str;
    pos = modified.find("World");
    if (pos != string::npos) {
        modified.replace(pos, 5, "Guysees!!"); // Replace "World" with "Universe"
        cout << "String after replacement: " << modified << endl;
    }

    // 8. Insert a substring
    string inserted = str;
    inserted.insert(0, "Start: "); // Insert at the beginning
    cout << "String after insertion: " << inserted << endl;

    // 9. Erase part of the string
    string erased = str;
    if (erased.length() >= 5) {
        erased.erase(0, 5); // Remove the first 5 characters
        cout << "String after erasing first 5 characters: " << erased << endl;
    }

    // 10. Convert to uppercase
    string upperStr = str;
    for (char &c : upperStr) {
        c = toupper(c);
    }
    cout << "String in uppercase: " << upperStr << endl;

    // 11. Reverse the string
    string reversed = str;
    reverse(reversed.begin(), reversed.end());
    cout << "Reversed string: " << reversed << endl;

    // 12. Parse input into words using stringstream
    cout << "Parsing input into words:" << endl;
    stringstream ss(str);
    string word;
    while (ss >> word) {
        cout << "Word: " << word << endl;
    }

    return 0;
}
