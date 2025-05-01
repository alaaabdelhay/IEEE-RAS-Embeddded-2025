#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    float gpa;
};

struct Student initStudent(int id, const char name[], float gpa) {
    struct Student s;
    s.id = id;
    strcpy(s.name, name);
    s.gpa = gpa;
    return s;
}

void printStudent(struct Student s) {
    printf("Student ID: %d\n", s.id);
    printf("Name: %s\n", s.name);
    printf("GPA: %.2f\n", s.gpa);
}

int main() {
    struct Student student1 = initStudent(101, "Mark", 3.85);
    printStudent(student1);
    return 0;
}
