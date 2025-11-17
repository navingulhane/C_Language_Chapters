#include <stdio.h>

int main() {
    int num;
    int digit;
    int product = 1; // Start with 1 because multiplication

    printf("Enter any number: ");
    scanf("%d", &num);

    // For loop to extract digits
    for(; num > 0; num = num / 10) {
        digit = num % 10;      // Get last digit
        product = product * digit; // Multiply with product
    }

    printf("Product of digits = %d\n", product);

    return 0;
}
