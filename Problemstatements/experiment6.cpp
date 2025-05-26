#include <iostream>
#include <fstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <sstream> // For istringstream
using namespace std;

int main() {
    // 1. std::map for word frequency
    string sentence = "this is a test this is only a test";
    map<string, int> wordFreq;
    string word;
    istringstream iss(sentence);
    while (iss >> word) {
        wordFreq[word]++;
    }
    cout << "Word Frequencies:\n";
    for (const auto& p : wordFreq) {
        cout << p.first << ": " << p.second << endl;
    }

    // 2. std::set for unique transaction IDs
    set<int> transactionIDs;
    cout << "\nEnter 5 transaction IDs (integers): ";
    for (int i = 0; i < 5; ++i) {
        int id;
        cin >> id;
        transactionIDs.insert(id);
    }
    cout << "Unique Transaction IDs (sorted): ";
    for (int id : transactionIDs) {
        cout << id << " ";
    }
    cout << endl;

    // 3. std::vector for student names and scores, sorted by score
    vector<pair<string, int>> students = {
        {"Alice", 85},
        {"Bob", 92},
        {"Charlie", 78},
        {"David", 90}
    };
    // Custom comparator: sort by score descending
    sort(students.begin(), students.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
        return a.second > b.second;
    });
    cout << "\nStudents sorted by score (high to low):\n";
    for (const auto& s : students) {
        cout << s.first << ": " << s.second << endl;
    }

    return 0;
}