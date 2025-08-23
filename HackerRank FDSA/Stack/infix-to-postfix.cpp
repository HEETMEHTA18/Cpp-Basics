#include <bits/stdc++.h>
using namespace std;

int pre(char op) {
    if (op == '^') return 3;
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return -1;
}

string infixToPostfix(string input) {
    stack<char> st;
    string postfix = "";
    bool lastWasOp = true;

    for (char c : input) {
        if (isalnum(c)) {
            postfix += c;
            lastWasOp = false;
        }
        else if (c == '(') {
            st.push(c);
            lastWasOp = true;
        }
        else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                postfix += st.top(); st.pop();
            }
            if (st.empty()) return "Invalid expression";
            st.pop();
            lastWasOp = false;
        }
        else {
            if (lastWasOp) return "Invalid expression";
            while (!st.empty() && pre(st.top()) >= pre(c)) {
                if (c == '^' && pre(st.top()) == pre(c)) break;
                postfix += st.top(); st.pop();
            }
            st.push(c);
            lastWasOp = true;
        }
    }

    if (lastWasOp) return "Invalid expression";

    while (!st.empty()) {
        if (st.top() == '(') return "Invalid expression";
        postfix += st.top();
        st.pop();
    }
    return postfix;
}

int main() {
    string input;
    getline(cin, input);
    cout << infixToPostfix(input) << endl;
    return 0;
}
