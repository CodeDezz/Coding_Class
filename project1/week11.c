// #include <stdio.h>

// // create file
// int main() {
//   FILE *fptr;

//   // Create a file on your computer (filename.txt)
//   fptr = fopen("filename.txt", "w"); // w for write

//   // Close the file
//   fclose(fptr);

//   return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
    
//     // File pointer to store the 
//     // value returned by fopen
//     FILE* fptr;

//     // Opening the file in read mode
//     fptr = fopen("filename.txt", "r"); // r for read

//     // checking if the file is 
//     // opened successfully
//     if (fptr == NULL) {
//         printf("The file is not opened.");
//     }
//     return 0;
// }

// #include <stdio.h>
// //write to file

// int main() {
//   FILE *fptr;

//   // Open a file in writing mode
//   fptr = fopen("filename.txt", "w");

//   // Write some text to the file
//   fprintf(fptr, "Writing to file. Hello World!");

//   // Close the file
//   fclose(fptr);

//   return 0;
// }

// #include <stdio.h>

// //append to file

// int main() {
//   FILE *fptr;

//   // Open a file in append mode
//   fptr = fopen("filename.txt", "a"); // a for append

//   // Append some text to the file
//   fprintf(fptr, "\nIt is going to be hot today !");
  
//   // Close the file
//   fclose(fptr);

//   return 0;
// }

// #include <stdio.h>

// //read from a file
// int main() {
// FILE *fptr;
//   // Open a file in read mode
// fptr = fopen("filename.txt", "r");
//   // Store the content of the file
// char myString[100];
//   // Read the content and store it inside myString
// fgets(myString, 100, fptr);
//   // Print file content
// printf("%s", myString);  

//   // Close the file
// fclose(fptr);
//   return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main() 
// {
//     FILE *fptr = fopen("filename.txt", "r");

//     if (fptr == NULL) {
//         printf("Cannot open file.\n");
//         return 1;
//     }

//     // Move to end of file
//     fseek(fptr, 0, SEEK_END);

//     // Get file size
//     long size = ftell(fptr);

//     // Return to beginning
//     rewind(fptr);

//     // Allocate memory (+1 for null terminator)
//     char *buffer = (char *)malloc(size + 1);

//     if (buffer == NULL) {
//         printf("Memory allocation failed.\n");
//         fclose(fptr);
//         return 1;
//     }

//     // Read the entire file
//     fread(buffer, 1, size, fptr);

//     // Null terminate (for text files)
//     buffer[size] = '\0';

//     printf("%s", buffer);

//     free(buffer);
//     fclose(fptr);

//     return 0;
// }

// #include <stdio.h> 
// int main() 
// {

// float a = 10.25; float b = 5.5; 

// int result = a + b ;

// printf("Result = %.2f\n", result); 

// return 0; 

// }

// #include <stdio.h>
// int main()
// {
//     char ch = 'A';
//     int num = ch;
//     printf("%d\n", num);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a = 5;
//     int b = 2;
//     float result = a / b;
//     printf("%.2f", result);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a = 5;
//     int b = 2;
//     float result = (float)a / b;
//     printf("%.2f", result);
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     float marks = 89.55;

//     int total = (int)(round(marks));

//     printf("%d", total);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int a = 5;
//     int b = 6;

//     float avg = (a + b) / 2;

//     printf("%.2f", avg);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     double pi = 3.14159;

//     float value = pi;

//  //   printf("%d\n", value);
//     float xsum= 3.5+value;
//       printf("%.1f\n", xsum);  

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int obtained = 425;
//     int total = 500;

//     float percentage;

//     percentage = obtained * 100 / total;

//     printf("Percentage = %.2f%%", percentage);

//     return 0;
// }


