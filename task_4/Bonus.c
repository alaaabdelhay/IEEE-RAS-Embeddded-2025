#include <stdio.h>

int main() {
    // Declare a pointer to a specific memory address
    unsigned int *ptr = (unsigned int*) 0x600000;

    // Writing to the specific address
    *ptr = 42;  // Example value written to address

    // Reading from the specific address
    unsigned int value = *ptr;

    printf("Value at 0x600000: %u\n", value);

    return 0;
}
