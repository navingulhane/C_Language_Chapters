Else-If Ladder
📌 Definition

The else-if ladder is used when you have multiple conditions to check.
Each condition is evaluated one after another.

🧠 Syntax
if (condition1) {
    // block 1
} else if (condition2) {
    // block 2
} else if (condition3) {
    // block 3
} else {
    // default block
}

📝 Example
#include <stdio.h>

int main() {
    int marks = 75;

    if (marks >= 90) {
        printf("Grade A");
    } else if (marks >= 75) {
        printf("Grade B");
    } else if (marks >= 50) {
        printf("Grade C");
    } else {
        printf("Fail");
    }

    return 0;
}
