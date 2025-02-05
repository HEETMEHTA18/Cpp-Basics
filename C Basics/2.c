#include <stdio.h>

void toggleString(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        else if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    }
}

int main() {
    char str[] = "FoolonCool";
    toggleString(str);
    printf("Toggled String: %s\n", str);
    return 0;
}
