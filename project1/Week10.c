// #include <stdio.h>

// int main() {
//   char txt[] = "We are the so-called \'Vikings\' from the north.";
//   printf("%s", txt);
 
//   return 0;
// }

// #include <stdio.h>

// int main() {
//   char greetings[] = "Hello World!";
//   printf("%c", greetings[0]);
 
//   return 0;
// }

// #include <stdio.h>

// int main() {
//   char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
//   char greetings2[] = "Hello World!";
  
//   printf("%s\n", greetings);
//   printf("%s\n", greetings2);
  
//   return 0;
// }

// #include <stdio.h>

// int main() {
//   char message[] = "Good to see you,";
//   char fname[] = "John";

//   printf("%s %s!", message, fname);
 
//   return 0;
// }

// #include <stdio.h>
// #include <string.h>
 
// int main() {
//   char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//   printf("%zu", strlen(alphabet));
//   return 0;
// }



// #include <stdio.h>
// #include <string.h>
 
// int main() {
//   char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//   printf("Length is: %zu\n", strlen(alphabet));
//   printf("Size is: %zu\n", sizeof(alphabet));
//   return 0;
// }
// Length is: 26
// Size is: 27

// #include <stdio.h>
// #include <string.h>
 
// int main() {
//   char str1[20] = "Hello ";
//   char str2[] = "World!";
 
//   // Concatenate str2 to str1 (the result is stored in str1)
//   strcat(str1, str2);
  
//   // Print str1
//   printf("%s", str1);
 
//   return 0;
// }

// #include<stdio.h>
  
// int main() {
//     char str[6];
      
//     // Read string
//     // from the user
//     scanf("%s",str);
      
//     // Print the string
//     printf("%s",str);
//     return 0;
// }   

/*Passing Strings to Function
As strings are character arrays, we can pass strings to functions in the same way we pass an array to a function. Below is a sample program to do this: */

// #include <stdio.h>

// void printStr(char str[])
// {
//     printf("%s", str);
// }

// int main() {
//     char str[] = "HellofromJapan";

//     // Passing string to a 
//     // function
//     printStr(str);
//     return 0;
// }
