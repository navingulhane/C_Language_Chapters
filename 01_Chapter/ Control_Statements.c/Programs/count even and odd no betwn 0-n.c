#include <stdio.h>

int main() {
    int n, i;
    int evenCount = 0, oddCount = 0;

    printf("Enter any number: ");
    scanf("%d", &n);

    // Loop from 1 to n
    for(i = 1; i <= n; i++) {

        if(i % 2 == 0) {
            evenCount++;   // Increase even counter
        }
        else {
            oddCount++;    // Increase odd counter
        }
    }

    printf("Total Even Numbers: %d\n", evenCount);
    printf("Total Odd Numbers : %d\n", oddCount);

    return 0;
}
