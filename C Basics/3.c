#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int originalNum = num, sum = 0, count = 0, temp = num;
    
    while (temp != 0) {
        count++;
        temp /= 10;
    }

    temp = num;
    while (temp != 0) {
        sum += pow(temp % 10, count);
        temp /= 10;
    }

    return (sum == originalNum);
}

int main() {
    int num = 153;
    if (isArmstrong(num))
        printf("%d is an Armstrong number\n", num);
    else
        printf("%d is not an Armstrong number\n", num);
    return 0;
}
