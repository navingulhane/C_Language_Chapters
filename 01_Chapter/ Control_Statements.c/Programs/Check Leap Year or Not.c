//leap year or not
#include <stdio.h>

int main() {
    int year;

    // Input
    printf("Enter any year:\n");
    scanf("%d", &year);

    // Leap year logic
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a Leap Year", year);
    }
    else {
        printf("%d is NOT a Leap Year", year);
    }

    return 0; // end of program
}
