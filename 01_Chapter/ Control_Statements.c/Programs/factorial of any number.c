#include <stdio.h>

int main() {
    int num, i;
    long long fact = 1;   // factorial grows big, so long long

    printf("Enter any positive number: ");
    scanf("%d", &num);

    // Loop from 1 to num
    for(i = 1; i <= num; i++) {
        fact = fact * i;   // keep multiplying
    }

    printf("Factorial of %d = %lld", num, fact);

    return 0;
}
