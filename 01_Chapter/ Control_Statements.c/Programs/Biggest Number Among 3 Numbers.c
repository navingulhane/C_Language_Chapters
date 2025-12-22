// biggest no among 3 no.
#include <stdio.h>

int main() {
    int a, b, c;

    // Taking input of 3 numbers from the user
    printf("Enter three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);
    
    // Checking if 'a' is the biggest
    if (a > b && a > c) {
        printf("%d is the biggest number", a);
    }
    // Checking if 'b' is the biggest
    else if (b > a && b > c) {
        printf("%d is the biggest number", b);
    }
    // Checking if 'c' is the biggest
    else if (c > a && c > b) {
        printf("%d is the biggest number", c);
    }
    // If none of the above are true, then at least two numbers are equal
    else {
        printf("Some or All numbers are equal");
    }

    // Divider for cleaner output
    printf("\n====================================");

    return 0; // Program ends
}
