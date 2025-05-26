#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

void logError(const string& msg, const char* func) {
    cout << "[" << func << "]: " << msg << endl;
}

int main() {
    string loanStr, incomeStr;
    double loan, income;

    cout << "Enter loan amount: ";
    getline(cin, loanStr);
    cout << "Enter annual income: ";
    getline(cin, incomeStr);

    try {
        loan = stod(loanStr);
        income = stod(incomeStr);

        if (income == 0)
            throw runtime_error("Division by zero ");

        double ratio = loan / income;
        cout << "Loan to income ratio: " << ratio << endl;
    }
    catch (const invalid_argument&) {
        logError("Invalid input (non-numeric)", __func__);
    }
    catch (const runtime_error& e) {
        logError(e.what(), __func__);
    }
    catch (...) {
        logError("Unknown error", __func__);
    }

    return 0;
}