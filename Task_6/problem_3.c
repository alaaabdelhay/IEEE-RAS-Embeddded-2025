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
    createDog("Buddy", 5, "Golden Retriever");
    createCat("Whiskers", 3, "Siamese");

    return 0;
}
