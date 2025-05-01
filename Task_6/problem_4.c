#include <stdio.h>
#include <string.h>

struct Animal {
    char name[50];
    int age;
    char kind[50];
};

void createDog(char name[], int age, char kind[]) {
    struct Animal dog;
    strcpy(dog.name, name);
    dog.age = age;
    strcpy(dog.kind, kind);

    printf("Dog Created:\n");
    printf("Name: %s\n", dog.name);
    printf("Age: %d years\n", dog.age);
    printf("Kind: %s\n", dog.kind);
}

void createCat(char name[], int age, char kind[]) {
    struct Animal cat;
    strcpy(cat.name, name);
    cat.age = age;
    strcpy(cat.kind, kind);

    printf("Cat Created:\n");
    printf("Name: %s\n", cat.name);
    printf("Age: %d years\n", cat.age);
    printf("Kind: %s\n", cat.kind);
}

int main() {
    struct Animal dog;
    struct Animal cat;

    createDog("Buddy", 5, "Golden Retriever");
    createCat("Whiskers", 3, "Siamese");

    printf("\nSize of Dog structure: %lu bytes\n", sizeof(dog));
    printf("Size of Cat structure: %lu bytes\n", sizeof(cat));

    // Explanation:
    // The size of the structures is affected by memory padding.
    // The 'name' and 'kind' fields are arrays of 50 characters, which means
    // they take 50 bytes each. The 'age' field is an integer, taking 4 bytes.
    // However, due to memory alignment and padding, the size of the structure
    // may be larger than the sum of the sizes of the individual members.
    // For example, the size of 'Animal' might be padded to align with the largest
    // data type (in this case, the integer), causing the structure to take more memory.

    return 0;
}
