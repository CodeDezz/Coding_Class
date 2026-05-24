#include <stdio.h>

int main() {

    int num1 = 1;
    int num2 = 10;
    int num3 = 100;
    int num4 = 1;
    int num5 = 10;
    int num6 = -100;


    printf("%03d\n", num1);
    printf("%03d\n", num2);
    printf("%03d\n", num3);
    printf("%+03d\n", num4);
    printf("%+03d\n", num5);
    printf("%-03d\n", num6);

    return 0;
}