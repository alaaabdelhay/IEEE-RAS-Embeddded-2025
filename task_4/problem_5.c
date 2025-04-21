#include <stdio.h>

int string_length(char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int length = string_length(str);
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }

    printf("Length = %d\n", length);
    return 0;
}
