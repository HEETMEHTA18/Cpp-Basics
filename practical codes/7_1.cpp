#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <cctype>

int main() {
    std::string line;
    std::getline(std::cin, line);
    std::map<std::string,int> freq;
    std::stringstream ss(line);
    std::string word;
    while (ss >> word) {
        for (auto &c : word) c = std::tolower(c);
        freq[word]++;
    }
    for (auto &p : freq)
        std::cout << p.first << ": " << p.second << std::endl;
    return 0;
}
