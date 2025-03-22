#include <iostream>
using namespace std;

int digitSum(long long num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int superDigit(long long num) {
    if (num < 10)
        return num;
    return superDigit(digitSum(num));
}

int main() {
    string n;
    int k;
    cin >> n >> k;
    long long sum = 0;
    for (char digit : n)
        sum += (digit - '0');
    cout << superDigit(sum * k) << endl;
    return 0;
}
