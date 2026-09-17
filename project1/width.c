// #include <stdio.h>

// int main() {

//     int num1 = 1;
//     int num2 = 10;
//     int num3 = 100;
//     int num4 = 1;
//     int num5 = 10;
//     int num6 = -100;


//     printf("%03d\n", num1);
//     printf("%03d\n", num2);
//     printf("%03d\n", num3);
//     printf("%+03d\n", num4);
//     printf("%+03d\n", num5);
//     printf("%-03d\n", num6);

//     return 0;
// }
#include <stdio.h>

int main() {
    
    char operator;
    double num1;
    double num2;
    double result;
    
    printf("Enter an operator (+ - * /): ");
    scanf("%c", &operator);

    printf("Enter number 1: ");
    scanf("%lf", &num1);
    
    printf("Enter number 2: ");
    scanf("%lf", &num2);
    
    switch(operator){
        case '+':
            result = num1 + num2;
            printf("\nresult: %lf", result);
            break;
        case '-':
            result = num1 - num2;
            printf("\nresult: %lf", result);
            break;
        case '*':
            result = num1 * num2;
            printf("\nresult: %lf", result);
            break;
        case '/':
            result = num1 / num2;
            printf("\nresult: %lf", result);
            break;
            
        default:
            printf("%c is not valid", operator);
    }
    

    return 0;
}