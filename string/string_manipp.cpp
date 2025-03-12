#include <stdio.h>
#include <string.h>
#include <ctype.h>

void findLength(char str[]) {
    printf("Length of the string: %d\n", strlen(str));
}

void reverseString(char str[]) {
    char rev[100];
    strcpy(rev, str);
    strrev(rev);
    printf("Reversed string: %s\n", rev);
}

void toUpperCase(char str[]) {
    for (int i = 0; str[i]; i++) {
        str[i] = toupper(str[i]);
    }
    printf("Uppercase string: %s\n", str);
}

void toLowerCase(char str[]) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
    printf("Lowercase string: %s\n", str);
}

void checkPalindrome(char str[]) {
    char rev[100];
    strcpy(rev, str);
    strrev(rev);
    if (strcmp(str, rev) == 0)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");
}

void concatenateStrings() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);
}

void countVowelsConsonants(char str[]) {
    int vowels = 0, consonants = 0;
    for (int i = 0; str[i]; i++) {
        char ch = tolower(str[i]);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }
    printf("Vowels: %d, Consonants: %d\n", vowels, consonants);
}

int main() {
    char str[100];
    int choice;

    printf("Enter a string: ");
    gets(str);

    do {
        printf("\nString Manipulation Menu:\n");
        printf("1. Find Length\n");
        printf("2. Reverse String\n");
        printf("3. Convert to Uppercase\n");
        printf("4. Convert to Lowercase\n");
        printf("5. Check Palindrome\n");
        printf("6. Concatenate with another string\n");
        printf("7. Count Vowels and Consonants\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();  // To consume the newline character

        switch (choice) {
            case 1: findLength(str); break;
            case 2: reverseString(str); break;
            case 3: toUpperCase(str); break;
            case 4: toLowerCase(str); break;
            case 5: checkPalindrome(str); break;
            case 6: concatenateStrings(); break;
            case 7: countVowelsConsonants(str); break;
            case 8: printf("Exiting program...\n"); break;
            default: printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 8);

    return 0;
}
