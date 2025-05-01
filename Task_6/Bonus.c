#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
} Dog;

void freeDog(Dog* dog) {
    if (dog != NULL) {
        printf("Freeing memory for Dog: %s\n", dog->name);
        free(dog);
    }
}

int main() {
    Dog* myDog = (Dog*)malloc(sizeof(Dog));
    strcpy(myDog->name, "Rex");
    myDog->age = 5;

    printf("Dog's name is: %s\n", myDog->name);
    printf("Dog's age is: %d\n", myDog->age);

    freeDog(myDog);

    getchar(); // Pause execution until a key is pressed
    return 0;
}
