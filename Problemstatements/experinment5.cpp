#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;
int main()
{
    // ifstream file("data.txt");
    // if (!file) {
    //     cerr << "Error opening file!" << endl;
    //     return 1;
    // }
    // cout << "File opened successfully." << endl;
    // string line;
    // while(getline(file,line))
    // {
    //     cout<<line<<endl;
    // }

    // file.close();
    // ofstream outFile("output.txt", ios::out | ios::trunc);
    // if (!outFile) {
    //     cerr << "Error opening output file!" << endl;
    //     return 1;
    // }
    // outFile << "This is a test output." << endl;
    // // outFile.close();
    // // cout << "Output file created successfully." << endl;
    // // ofstream appendFile("output.txt", ios::out | ios::app);
    // // if (!appendFile) {
    // //     cerr << "Error opening append file!" << endl;
    // //     return 1;
    // // }

    // appendFile << "Appending this line to the output file." << endl;
    // appendFile.close();
    // cout << "Data appended successfully." << endl;
    // ifstream readFile("output.txt");
    // if (!readFile) {
    //     cerr << "Error opening read file!" << endl;
    //     return 1;
    // }


    // cout << "Reading from output file:" << endl;
    // while (getline(readFile, line)) {
    //     cout << line << endl;
    // }
    // readFile.close();
    // cout << "File read successfully." << endl;
    // remove("output.txt");
    // cout << "File deleted successfully." << endl;

    ifstream file("student.txt"); // Open the file for reading
    if (!file) {
        cerr << "Error opening file!" << endl;
        return 1;
    }
    cout << left << setw(12) << "Name"
         << setw(10) << "Marks"
         << setw(8) << "Grade"
         << setw(12) << "Fees" << endl;
    cout << setfill('-') << setw(42) << "-" << setfill(' ') << endl;

    string name, grade;
    double marks, fees;

    // Read and display each student's data
    while (file >> name >> marks >> grade >> fees) {
        cout << left << setw(12) << name
             << setw(10) << fixed << setprecision(2) << marks
             << setw(8) << grade
             << "\u20B9" << setw(11) << fixed << setprecision(2) << fees << endl;
    }

    file.close(); // Close the file
    return 0;

    return 0;
};