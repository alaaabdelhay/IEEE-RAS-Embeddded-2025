#include <stdio.h>

int main() {
    int i = 10;
    char c = 'A';
    float f = 3.14;
    long l = 123456789;

    int *pInt = &i;
    char *pChar = &c;
    float *pFloat = &f;
    long *pLong = &l;

    printf("----- INT -----\n");
    printf("Value of i: %d\n", i);
    printf("Address of i: %p\n", &i);
    printf("Value using pointer pInt: %d\n", *pInt);
    printf("Address using pointer pInt: %p\n", pInt);

    printf("\n----- CHAR -----\n");
    printf("Value of c: %c\n", c);
    printf("Address of c: %p\n", &c);
    printf("Value using pointer pChar: %c\n", *pChar);
    printf("Address using pointer pChar: %p\n", pChar);

    printf("\n----- FLOAT -----\n");
    printf("Value of f: %.2f\n", f);
    printf("Address of f: %p\n", &f);
    printf("Value using pointer pFloat: %.2f\n", *pFloat);
    printf("Address using pointer pFloat: %p\n", pFloat);

    printf("\n----- LONG -----\n");
    printf("Value of l: %ld\n", l);
    printf("Address of l: %p\n", &l);
    printf("Value using pointer pLong: %ld\n", *pLong);
    printf("Address using pointer pLong: %p\n", pLong);

    return 0;
}
