#include <stdio.h>

struct Pet {
    char name[30];
    int age;
    char kind[20];
    char food[30];
    char ownerName[30];
};

int main() {
    struct Pet dog;

    printf("Enter dog's name: ");
    gets(dog.name);

    printf("Enter dog's age: ");
    scanf("%d", &dog.age);
    getchar();

    printf("Enter kind: ");
    gets(dog.kind);

    printf("Enter favorite food: ");
    gets(dog.food);

    printf("Enter owner's name: ");
    gets(dog.ownerName);

    printf("\n--- Dog Info ---\n");
    printf("Name: %s\n", dog.name);
    printf("Age: %d\n", dog.age);
    printf("Kind: %s\n", dog.kind);
    printf("Food: %s\n", dog.food);
    printf("Owner's Name: %s\n", dog.ownerName);

    return 0;
}

