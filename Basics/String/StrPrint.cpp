#include <iostream>
#include <string>
#include <sstream>
#include <thread>
#include <chrono>

class WordPrinter {
public:
    WordPrinter(const std::string& input) : userInput(input) {}
    
    void printWordsWithDelay() {
        std::istringstream stream(userInput);
        std::string word;
        
        // Print each word with a 1-second delay
        while (stream >> word) {
            std::cout << word << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }
    }
    
private:
    std::string userInput;
};

int main() {
    std::string userInput;
    
    // Get user input
    std::cout << "Enter a string: ";
    std::getline(std::cin, userInput);
    
    // Create an instance of WordPrinter and call printWordsWithDelay
    WordPrinter printer(userInput);
    printer.printWordsWithDelay();
    
    return 0;
}
