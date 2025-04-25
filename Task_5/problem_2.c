#include <stdio.h>

void copyString(char *source, char *destination) {
    while (*source != '\0') {
        *destination = *source;
        source++;
        destination++;
    }
    *destination = '\0';
}

int main() {
    char str[100];
    char copiedStr[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    copyString(str, copiedStr);

    printf("Original String: %s", str);
    printf("Copied String: %s", copiedStr);

    return 0;
}
