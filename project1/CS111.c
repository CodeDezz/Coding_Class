// //Week 1 In-Class Exercise: Output Statements

// #include <stdio.h>

// //Code written by Win Kyaw
// /* This was updated on the 05/18/2026
// The assignment is due on 05/25/2026*/

// int main(){

//     printf("Happy 2026!\n");

//     printf("Happy 2026; Welcome to C!\n");

//     puts("Welcome to USV!\n");

//     puts("Welcome to C programming Class");

//     return 0;
// }

// prints The character (a) has the value 97.
// #include <stdio.h>

// int main()
// {
//     printf("The character (%c) has the value %d.\n", 'a', 'a');

//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     unsigned int aCount = 0;
//     unsigned int bCount = 0;
//     unsigned int cCount = 0;
//     unsigned int dCount = 0;
//     unsigned int fCount = 0;

//     puts("Enter the letter grades.");
//     puts("Enter the EOF character to end input.");
//     int grade;

//     while((grade = getchar()) != EOF) {
//         switch (grade) {

//             case 'A':
//             case 'a':
//                 ++aCount;
//                 break;

//             case 'B':
//             case 'b':
//                 ++bCount;
//                 break;

//             case 'C':
//             case 'c':
//                 ++cCount;
//                 break;

//             case 'D':
//             case 'd':
//                 ++dCount;
//                 break;

//             case 'F':
//             case 'f':
//                 ++fCount;
//                 break;

//             case '\n':
//             case '\t':
//             case ' ':
//                 break;

//                 default:
//                 printf("%s", "Incorrect letter grade entered.");
//                 puts("Enter a new grade.");
//                 break;
//         }
//     }

//     puts("\nTotals for each letter grade are:");
// printf("A: %u\n", aCount);
// printf("B: %u\n", bCount);
// printf("C: %u\n", cCount);
// printf("D: %u\n", dCount);
// printf("F: %u\n", fCount);
// }

// #include <stdio.h>

// int square (int y);

// int main(void)
// {
//     for (int x = 1; x <= 10; ++x){
//         printf("%d ", square(x));
//     }
//     puts("");
// }

// int square (int y)
// {
//     return y * y;
// }

// #include <stdio.h>

// // Function to calculate and print areas
// void calculateAreas(int lengths[], int widths[], int size) {
//     printf("Rectangle Areas:\n");
//     for (int i = 0; i < size; i++) {
//         // Area formula: Area = length * width
//         int area = lengths[i] * widths[i];
//         printf("Rectangle %d: %d x %d = %d\n", i + 1, lengths[i], widths[i], area);
//     }
// }

// int main() {
//     int lengths[] = {31, 100, 28, 91, 177};
//     int widths[] = {10, 12, 166, 23, 67};
//     int size = sizeof(lengths) / sizeof(lengths[0]); // Calculates array length

//     calculateAreas(lengths, widths, size);

//     return 0;
// }

// Pointer Example
// #include <stdio.h>

// int main() {
//   int myAge = 43;  // An int variable

//   int *ptr = &myAge;  // A pointer variable, with the name ptr, that stores the address of myAge

//   // Output the value of myAge (43)
//   printf("%d\n", myAge);

//   // Output the memory address of myAge (0x7ffe5367e044)
//   printf("%p\n", &myAge);

//   // Output the memory address of myAge with the pointer (0x7ffe5367e044)
//   printf("%p\n", ptr);

//   return 0;
// }

// #include<stdio.h>

// int main()
// {
//     // Normal Variable
//     int var = 15;
//     // Pointer Variable ptr that stores address of var
//     int *ptr = &var;

//     // Directly accessing ptr will give us an address
//     printf("%p\n", ptr);
//     // Dereference accessing ptr will give us value
//     printf("%d\n", *ptr);
//     return 0;
// }
// #include <stdio.h>

// int main() 
// {
//     int abc;
//     char xyz;
//     int *ptr1;
//     char *ptr2;
//     float xmath;
//     double abcd;

//     // Finding size using sizeof()
//         printf("%zu\n", sizeof(abc));
//     printf("%zu\n", sizeof(xyz));
//     printf("%zu\n", sizeof(ptr1));
//     printf("%zu\n", sizeof(ptr2));
//     printf("%zu\n", sizeof(xmath));
//     printf("%zu", sizeof(abcd));

//     return 0;
// }
// // Reference: Output the memory address of myAge with the pointer (0x7ffe5367e044)
//   printf("%p\n", ptr);

//   // Dereference: Output the value of myAge with the pointer (43)
//   printf("%d\n", *ptr);

//   return 0;
// }

// #include <stdio.h>

// int main()
// {

//     // Normal Variable
//     int var = 10;

//     // Pointer Variable ptr that stores address of var
//     int *ptr = &var;

//     // Directly accessing ptr will give us an address
//     printf("%p", ptr);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//   int myNumbers[4] = {45, 50, 75, 100};
//   int *p = myNumbers;     // points to myNumbers[0]
//   int *p2 = &myNumbers[0];  // points to myNumbers[0]

//   printf("%p\n", p2);     // 45
//   printf("%i\n", *(p + 1)); // 50
//   printf("%i\n", *(p + 2)); // 75
//   printf("%i\n", *(p + 3)); // 100
//   return 0;
// }

// #include <stdio.h>

// int main() {
//   int myNumbers[4] = {25, 50, 75, 100};

//   printf("%zu", sizeof(myNumbers));

//   return 0;
// }

// #include <stdio.h>
// int main() {
//   int students[20];
//   printf("%zu", sizeof(students)); // 80 bytes
//   return 0;
// }

// #include <stdio.h>
// int main() {
//   int myInt;
//   float myFloat;
//   double myDouble;
//   char myChar;
 
//   printf("%zu\n", sizeof(myInt));
//   printf("%zu\n", sizeof(myFloat));
//   printf("%zu\n", sizeof(myDouble));
//   printf("%zu\n", sizeof(myChar));
 
//   return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
    
//   int *students;
  
//   int numStudents = 120;
  
//   students = calloc(numStudents, sizeof(*students));
  
//   printf("%d", numStudents * sizeof(*students)); // 48 bytes
  
//   return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//   // Allocate memory
//   int *ptr;
//   ptr = calloc(4, sizeof(*ptr));
//   // Write to the memory
//   *ptr = 2;
//   ptr[1] = 4;
//   ptr[2] = 6;
//   // Read from the memory
//   printf("%d\n", *ptr);
//   printf("%d %d %d", ptr[1], ptr[2], ptr[3]);
//   return 0;
// }

#include <stdio.h>
#include <stdlib.h>
int main() 
{
  int *ptr;
  ptr = malloc(sizeof(*ptr)); // Allocate memory for one integer
  // If memory cannot be allocated, print a message and end the main() function
  if (ptr == NULL) {
    printf("Unable to allocate memory");
    return 1;   }
  // Set the value of the integer
  *ptr = 20;
  // Print the integer value
  printf("Integer value: %d\n", *ptr);
  // Free allocated memory
  free(ptr);
  // Set the pointer to NULL to prevent it from being accidentally used
  ptr = NULL;
  return 0; 
}