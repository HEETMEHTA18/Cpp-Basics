/*    A for loop is a programming language statement which allows code to be repeatedly executed.

The syntax is

for ( <expression_1> ; <expression_2> ; <expression_3> )
    <statement>
expression_1 is used for intializing variables which are generally used for controlling the terminating flag for the loop.
expression_2 is used to check for the terminating condition. If this evaluates to false, then the loop is terminated.
expression_3 is generally used to update the flags/variables.
A sample loop is

for(int i = 0; i < 10; i++) {
    ...
}
In this challenge, you will use a for loop to increment a variable through a range.

Input Format

You will be given two positive integers,  and  (), separated by a newline.

Output Format

For each integer  in the inclusive interval :

If , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else if  and it is an even number, then print "even".
Else if  and it is an odd number, then print "odd".*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        if (i == 1) {
            cout << "one" << endl;
        } else if (i == 2) {
            cout << "two" << endl;
        } else if (i == 3) {
            cout << "three" << endl;
        } else if (i == 4) {
            cout << "four" << endl;
        } else if (i == 5) {
            cout << "five" << endl;
        } else if (i == 6) {
            cout << "six" << endl;
        } else if (i == 7) {
            cout << "seven" << endl;
        } else if (i == 8) {
            cout << "eight" << endl;
        } else if (i == 9) {
            cout << "nine" << endl;
        } else if (i > 9) {
            if (i % 2 == 0) {
                cout << "even" << endl;
            } else {
                cout << "odd" << endl;
            }
        }
    }

    return 0;
}