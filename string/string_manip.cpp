#include <iostream>
#include <algorithm>
using namespace std;

// Function to toggle case of characters
string toggleCase(string str) {
    for (char &c : str) {
        if (isupper(c))
            c = tolower(c);
        else if (islower(c))
            c = toupper(c);
    }
    return str;
}

// Function to replace vowels with '*'
string replaceVowels(string str) {
    string vowels = "AEIOUaeiou";
    for (char &c : str) {
        if (vowels.find(c) != string::npos) {
            c = '*';
        }
    }
    return str;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    
    // Reverse the string
    string reversed = input;
    reverse(reversed.begin(), reversed.end());
    
    // Toggle case
    string toggled = toggleCase(input);
    
    // Replace vowels
    string replaced = replaceVowels(input);
    
    // Display results
    cout << "Reversed: " << reversed << endl;
    cout << "Toggled Case: " << toggled << endl;
    cout << "Vowels Replaced: " << replaced << endl;
    
    return 0;
}
