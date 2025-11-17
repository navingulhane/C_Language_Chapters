IF Statement
 Definition

The if statement checks a single condition.
If the condition is true, the code executes.
If it is false, the code is skipped.
    
 Syntax
if (condition) {
    // code runs when condition is true
}

 Example
#include <stdio.h>

int main() {
    int age = 18;

    if (age >= 18) {
        printf("You are an adult.");
    }

    return 0;
}
