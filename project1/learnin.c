// #include <stdio.h>

// void processString(char str[]) {
//     int vowelCount = 0;
//     char consonants[100]; 
//     int cIndex = 0;

//     for (int i = 0; str[i] != '\0'; i++) {
//         char ch = str[i];
        
//         // Check if the character is a vowel (both lower and uppercase)
//         if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
//             ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
//             vowelCount++;
//         }
//         // Check if it's a consonant by ensuring it's a letter but wasn't a vowel
//         else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
//             consonants[cIndex] = ch;
//             cIndex++;
//         }
//         // Keep spaces for readability
//         else if (ch == ' ') {
//             consonants[cIndex] = ch;
//             cIndex++;
//         }
//     }
//     consonants[cIndex] = '\0'; // Null-terminate the string

//     printf("Number of vowels: %d\n", vowelCount);
//     printf("Consonants: %s\n", consonants);
// }

// int main() {
//     char text[] = "The blue whale is out in the bay";
//     processString(text);
//     return 0;
// }

// #include <stdio.h>

// char op[4] = {'+', '-', '*', '/'};

// void question1() {
//     printf("Select one of the following arithmetic operations +,-,*,/: \n");
//     scanf(" %c", &op[0]); // Note the space before %c to consume any leading whitespace
// }

// int main(void){

//     float f1 = 100.6678, f2 = 25.0;

//     question1();

//     switch(op[0]) {
//         case '+':
//             printf("The sum of %.2f and %.2f is %.2f\n", f1, f2, f1 + f2);
//             break;
//         case '-':
//             printf("The difference of %.2f and %.2f is %.2f\n", f1, f2, f1 - f2);
//             break;
//         case '*':
//             printf("The product of %.2f and %.2f is %.2f\n", f1, f2, f1 * f2);
//             break;
//         case '/':
//             printf("The quotient of %.2f and %.2f is %.2f\n", f1, f2, f1 / f2);
//             break;
//     }

// }

// #include <stdio.h>
// // Create a structure called myStructure
// struct myStructure {
// int myNum;
// char myLetter;
// };
// int main() {
// // Create a structure variable of myStructure called s1
// struct myStructure r1;
// // Assign values to members of s1
// r1.myNum = 13;
// r1.myLetter = 'B';
// // Print values
// printf("My number: %d\n", r1.myNum);
// printf("My letter: %c\n", r1.myLetter);
// return 0;
// }

// #include <stdio.h>

// struct Car {
//   char brand[30];
//   char model[30];
//   int year;
// };

// int main() {
//   struct Car car1  = {"BMW", "X5", 1999};
//   struct Car car2  = {"Ford", "Mustang", 1969};
//   struct Car car3  = {"Toyota", "Corolla", 2011};

//   printf("%s %s %d\n", car1.brand, car1.model, car1.year);
//   printf("%s %s %d\n", car2.brand, car2.model, car2.year);
//   printf("%s %s %d\n", car3.brand, car3.model, car3.year);

//   return 0;
// }