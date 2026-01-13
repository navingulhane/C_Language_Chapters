// Check Even or Odd number with logic shown
#include<stdio.h>
int main() {
    int num;
    
    printf("Enter any number:\n");
    scanf("%d", &num);

    // Shown the logic ^_^
    printf("Step: %d %% 2 = %d\n", num, num % 2);

    if(num % 2 == 0){
        printf("Result: %d is an EVEN number", num);
    }
    else {
        printf("Result: %d is an ODD number", num);
    }

    return 0;
}
