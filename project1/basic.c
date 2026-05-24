#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// This is my first personal project in C and learning space
/* Today date is
5/2/2026
and time is
11:51 PM */

int main() {

    int age = 0;
    float gpa = 0.0;
    char grade = '\0';
    char name[30] = "";

    /*printing out a question and scans the printf output 
    value and address the age to output it back*/
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your gpa: ");
    scanf("%f", &gpa);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    getchar();
    printf("Enter your full name: ");
    fgets( name, sizeof(name), stdin);
    name[strlen(name) -1] = '\0';


    printf("%s\n", name);
    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", grade);
    

    return 0;
}