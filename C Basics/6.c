#include <stdio.h>
#include <math.h>

int binaryToOctal(long long binary) {
    int octal = 0, decimal = 0, i = 0;

    while (binary != 0) {
        decimal += (binary % 10) * pow(2, i++);
        binary /= 10;
    }

    i = 1;
    while (decimal != 0) {
        octal += (decimal % 8) * i;
        decimal /= 8;
        i *= 10;
    }

    return octal;
}

int main() {
    long long binary = 110101;
    printf("Octal: %d\n", binaryToOctal(binary));
    return 0;
}
