#include <stdio.h>

typedef unsigned char uchar;
typedef signed char schar;
typedef unsigned short ushort;
typedef signed short sshort;
typedef unsigned int uint;
typedef signed int sint;
typedef unsigned long ulong;
typedef signed long slong;
typedef float f32;
typedef double f64;
typedef long double f80;

int main() {
    printf("Size of uchar: %zu bytes\n", sizeof(uchar));
    printf("Size of schar: %zu bytes\n", sizeof(schar));
    printf("Size of ushort: %zu bytes\n", sizeof(ushort));
    printf("Size of sshort: %zu bytes\n", sizeof(sshort));
    printf("Size of uint: %zu bytes\n", sizeof(uint));
    printf("Size of sint: %zu bytes\n", sizeof(sint));
    printf("Size of ulong: %zu bytes\n", sizeof(ulong));
    printf("Size of slong: %zu bytes\n", sizeof(slong));
    printf("Size of f32: %zu bytes\n", sizeof(f32));
    printf("Size of f64: %zu bytes\n", sizeof(f64));
    printf("Size of f80: %zu bytes\n", sizeof(f80));

    return 0;
}
