#include <iostream>
#include <string>
using namespace std;

int main() {
    int numStrings;
    cout << "Enter the number of strings: ";
    cin >> numStrings;

    cin.ignore(); // Clear the input buffer before reading strings

   string strings[numStrings]; // Fixed-size array to store strings

    for (int i = 0; i < numStrings; ++i) {
        cout << "Enter string " << i + 1 << ": ";
        getline(cin, strings[i]); // Read the string including spaces
    }

    cout << "\nYou entered the following strings:\n";
    for (int i = 0; i < numStrings; ++i) {
        cout << strings[i] << endl;
    }

    return 0;
}
