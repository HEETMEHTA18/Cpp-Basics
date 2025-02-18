#include <iostream>
using namespace std;

void printH() {
    for (int i = 0; i < 5; i++) {
        cout << "*   * ";
        if (i == 2) cout << "***** "; // Middle line
        else cout << "*   * ";
        cout << endl;
    }
    cout << endl;
}

void printE() {
    for (int i = 0; i < 5; i++) {
        cout << "* * * *";
        if (i == 1 || i == 3) cout << " *"; // Reduce middle lines
        cout << endl;
    }
    cout << endl;
}

void printL() {
    for (int i = 0; i < 5; i++) {
        cout << "* ";
        if (i == 4) cout << "* * * *";
        cout << endl;
    }
    cout << endl;
}

void printO() {
    for (int i = 0; i < 5; i++) {
        if (i == 0 || i == 4) cout << " *** ";
        else cout << "*   *";
        cout << endl;
    }
    cout << endl;
}

void printW() {
    for (int i = 0; i < 5; i++) {
        cout << "*   *   *   * ";
        if (i == 3) cout << " * * ";
        if (i == 4) cout << "  *  ";
        cout << endl;
    }
    cout << endl;
}

void printR() {
    for (int i = 0; i < 5; i++) {
        cout << "* * *  ";
        if (i == 2) cout << "* *";
        if (i == 3) cout << "*  *";
        if (i == 4) cout << "*   *";
        cout << endl;
    }
    cout << endl;
}

void printD() {
    for (int i = 0; i < 5; i++) {
        cout << "* * * ";
        if (i == 0 || i == 4) cout << " *";
        if (i > 0 && i < 4) cout << "   *";
        cout << endl;
    }
    cout << endl;
}

int main() {
    printH();
    printE();
    printL();
    printL();
    printO();
    printW();
    printO();
    printR();
    printL();
    printD();

    return 0;
}
