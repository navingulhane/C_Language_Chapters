Nested IF-ELSE
 Definition

A nested if-else means placing one if/else block inside another.
Useful when your decision depends on two or more related checks.

Syntax
if (condition1) {
    if (condition2) {
        // inner if
    } else {
        // inner else
    }
} else {
    // outer else
}

 Example
#include <stdio.h>

int main() {
    int age = 20;
    int hasID = 1;

    if (age >= 18) {
        if (hasID == 1) {
            printf("Entry allowed");
        } else {
            printf("ID required");
        }
    } else {
        printf("Underage");
    }

    return 0;
}
