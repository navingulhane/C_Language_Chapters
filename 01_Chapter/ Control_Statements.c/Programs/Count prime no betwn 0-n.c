//
#include <stdio.h>

int main() {
    int n, i, j, isPrime;
    int primeCount = 0;

    printf("Enter any number: ");
    scanf("%d", &n);

  
    for(i = 2; i <= n; i++) {

        isPrime = 1; // Assume i is prime

        
        for(j = 2; j <= i/2; j++) {
            if(i % j == 0) {
                isPrime = 0; 
                break;
            }
        }

        if(isPrime == 1) {
            primeCount++; // Increase count of prime numbers
        }
    }

    printf("Total Prime Numbers between 1 to %d = %d\n", n, primeCount);

    return 0;
}
