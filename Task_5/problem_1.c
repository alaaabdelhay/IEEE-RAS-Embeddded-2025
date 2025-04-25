#include <stdio.h>

int compareStrings(char *str1, char *str2) {
    while (*str1 != '\0' || *str2 != '\0') {
        if (*str1 != *str2) {
            return 0;
        }
        str1++;
        str2++;
    }
    return 1;
}

int main() {
    char string1[100], string2[100];

    printf("Enter first string: ");
    scanf(" %[^\n]", string1);

    getchar();

    printf("Enter second string: ");
    scanf(" %[^\n]", string2);
    if (compareStrings(string1, string2)) {
        printf("Both strings are Identical\n");
    } else {
        printf("Strings are Not Identical\n");
    }

    return 0;
}

