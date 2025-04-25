#include <stdio.h>
#include <stdlib.h>

int stringToInt(char *str) {
    int result = 0;

    if (*str == '-') {
        str++;
    }

    while (*str != '\0') {
        result = result * 10 + (*str - '0');
        str++;
    }

    return result;
}

int main() {
    char str[100];

    printf("Enter a string representing an integer: ");
    fgets(str, sizeof(str), stdin);

    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    printf("Converted value is %d\n", stringToInt(str));

    return 0;
}
