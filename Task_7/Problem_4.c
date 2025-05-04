#include <stdio.h>

typedef enum {
    SATURDAY, SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY
} Day;

const char* check_day(Day day) {
    if (day == FRIDAY) {
        return "Weekend";
    } else {
        return "Weekday";
    }
}

int main() {
    int choice;

    printf("Select a day of the week:\n");
    printf("0 - SATURDAY\n");
    printf("1 - SUNDAY\n");
    printf("2 - MONDAY\n");
    printf("3 - TUESDAY\n");
    printf("4 - WEDNESDAY\n");
    printf("5 - THURSDAY\n");
    printf("6 - FRIDAY\n");
    printf("Enter the number corresponding to the day: ");
    scanf("%d", &choice);

    if (choice < 0 || choice > 6) {
        printf("Invalid choice! Please enter a number between 0 and 6.\n");
    } else {
        Day today = (Day)choice;
        printf("Today is %s.\n", check_day(today));
    }

    return 0;
}

