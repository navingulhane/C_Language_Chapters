#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter any number: ");
    scanf("%d", &num);

    // for loop runs as long as num > 0
    for(; num > 0; num = num / 10) {
        int digit = num % 10;   // extract last digit
        sum = sum + digit;      // add digit to sum
    }

    printf("Sum of digits = %d", sum);

    return 0;
}
