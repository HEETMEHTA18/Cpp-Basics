#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str, sub, replaceWith;
    
    cout << "Enter a string: ";
    getline(cin, str);

    // 1. Reverse the string
    string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end());
    cout << "Reversed String: " << reversedStr << endl;

    // 2. Convert to Uppercase
    string upperStr = str;
    transform(upperStr.begin(), upperStr.end(), upperStr.begin(), ::toupper);
    cout << "Uppercase String: " << upperStr << endl;

    // 3. Convert to Lowercase
    string lowerStr = str;
    transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);
    cout << "Lowercase String: " << lowerStr << endl;

    // 4. Find length of string
    cout << "Length of String: " << str.length() << endl;

    // 5. Concatenation
    string anotherStr;
    cout << "Enter another string to concatenate: ";
    getline(cin, anotherStr);
    string concatenated = str + " " + anotherStr;
    cout << "Concatenated String: " << concatenated << endl;

    // 6. Find a substring
    cout << "Enter substring to search: ";
    getline(cin, sub);
    size_t found = str.find(sub);
    if (found != string::npos)
        cout << "Substring found at position: " << found << endl;
    else
        cout << "Substring not found!" << endl;

    // 7. Replace a substring
    cout << "Enter substring to replace: ";
    getline(cin, sub);
    cout << "Enter replacement string: ";
    getline(cin, replaceWith);
    size_t pos = str.find(sub);
    if (pos != string::npos) {
        str.replace(pos, sub.length(), replaceWith);
        cout << "Modified String: " << str << endl;
    } else {
        cout << "Substring not found, cannot replace!" << endl;
    }

    // 8. Remove spaces from a string
    string noSpaceStr = "";
    for (char c : str) {
        if (c != ' ')
            noSpaceStr += c;
    }
    cout << "String without spaces: " << noSpaceStr << endl;

    return 0;
}
