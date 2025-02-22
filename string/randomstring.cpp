#include <iostream>

std::string randomString(int length) {
    std::string str = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    std::string result;
    int seed = 1; // Simple manual seed

    for (int i = 0; i < length; i++) {
        seed = (seed * 31 + 7) % str.size(); // Basic pseudo-random logic
        result += str[seed];
    }
    return result;
}

int main() {
    std::cout << randomString(10) << std::endl; // Generate a random string of length 10
    return 0;
}