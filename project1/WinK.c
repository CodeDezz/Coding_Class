#include <stdio.h>

int main(){

    int a, b;
    
    printf("Enter two integers numbers: ");
    scanf("%d %d", &a, &b);

    printf("The sum of %d and %d is: %d\n", a, b, a + b);
    printf("The difference of %d and %d is: %d\n", a, b, a - b);
    printf("The multiplication of %d and %d is: %d\n", a, b, a * b);
    
    return 0;
}