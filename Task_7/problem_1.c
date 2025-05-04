#include <stdio.h>
#include <string.h>

typedef struct {
    unsigned int roll_number : 4;
    unsigned int age : 8;
    unsigned int marks : 3;
    char address[50];
    char name[30];
} student_info;

void print_student_info(student_info s) {
    printf("Roll Number: %u\n", s.roll_number);
    printf("Age: %u\n", s.age);
    printf("Marks: %u\n", s.marks);
    printf("Address: %s\n", s.address);
    printf("Name: %s\n", s.name);
    printf("-----------------------\n");
}

int main() {
    student_info students[5] = {
        {1, 20, 5, "123 Main St", "Alice"},
        {2, 21, 6, "456 Elm St", "Bob"},
        {3, 19, 4, "789 Pine St", "Charlie"},
        {4, 22, 7, "321 Oak St", "Diana"},
        {5, 20, 3, "654 Maple St", "Ethan"}
    };

    for (int i = 0; i < 5; i++) {
        print_student_info(students[i]);
    }

    printf("Size of struct student_info: %lu bytes\n", sizeof(student_info));

    return 0;
}
