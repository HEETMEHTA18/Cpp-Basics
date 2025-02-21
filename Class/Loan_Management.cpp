#include <iostream>
#include <cmath> // For pow() function

using namespace std;

class Loan {
private:
    int loanID;
    string applicantName;
    double loanAmount;
    double annualInterestRate; // Percentage
    int tenureMonths;

public:
    // Default Constructor
    Loan() {
        loanID = 0;
        applicantName = "Unknown";
        loanAmount = 0.0;
        annualInterestRate = 0.0;
        tenureMonths = 0;
    }

    // Parameterized Constructor
    Loan(int id, string name, double amount, double rate, int tenure) {
        loanID = id;
        applicantName = name;
        loanAmount = amount;
        annualInterestRate = rate;
        tenureMonths = tenure;
    }

    // Function to calculate EMI using the given formula
    double calculateEMI() {
        if (loanAmount == 0 || tenureMonths == 0 || annualInterestRate == 0)
            return 0.0; // Avoid division by zero

        double R = (annualInterestRate / 12) / 100; // Monthly interest rate
        double numerator = loanAmount * R * pow((1 + R), tenureMonths);
        double denominator = pow((1 + R), tenureMonths) - 1;

        return numerator / denominator;
    }

    // Function to display loan details
    void displayLoanDetails() {
        cout << "\n-------------------------------";
        cout << "\n Loan ID: " << loanID;
        cout << "\n Applicant Name: " << applicantName;
        cout << "\n Loan Amount: ₹" << loanAmount;
        cout << "\n Annual Interest Rate: " << annualInterestRate << "%";
        cout << "\n Loan Tenure: " << tenureMonths << " months";
        cout << "\n EMI: $" << calculateEMI();
        cout << "\n-------------------------------\n";
    }

    // Getter function to return Loan ID for searching
    int getLoanID() {
        return loanID;
    }
};

// Main function
int main() {
    const int MAX_LOANS = 3;  // Number of loan records to store
    Loan loans[MAX_LOANS];    // Array of loan objects

    // Input details for loans
    for (int i = 0; i < MAX_LOANS; i++) {
        int id, tenure;
        string name;
        double amount, rate;

        cout << "\nEnter details for Loan " << (i + 1) << ":\n";
        cout << "Loan ID: ";
        cin >> id;
        cout << "Applicant Name: ";
        cin.ignore(); // Clear input buffer
        getline(cin, name);
        cout << "Loan Amount ($): ";
        cin >> amount;
        cout << "Annual Interest Rate (%): ";
        cin >> rate;
        cout << "Loan Tenure (Months): ";
        cin >> tenure;

        loans[i] = Loan(id, name, amount, rate, tenure); // Store loan data
    }

    int choice;
    do {
        cout << "\nLoan Management System\n";
        cout << "1. View Loan Details\n";
        cout << "2. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int id;
                cout << "Enter Loan ID to view details: ";
                cin >> id;

                bool found = false;
                for (int i = 0; i < MAX_LOANS; i++) {
                    if (loans[i].getLoanID() == id) {  // Use getter to access Loan ID
                        loans[i].displayLoanDetails();
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Loan not found!\n";
                break;
            }

            case 2:
                cout << "Exiting program. Thank you!\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 2);

    return 0;
}
