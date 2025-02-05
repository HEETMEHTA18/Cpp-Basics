#include <stdio.h>

int isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++)
        if (num % i == 0)
            sum += i;
    return (sum == num);
}

int main() {
    int num ;
    printf("Enter a integer: ");
    scanf("%d", &num);
    printf("%d is %sPerfect\n", num, isPerfect(num) ? "" : "Not ");
    return 0;
}
