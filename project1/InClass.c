//Week 1 In-Class Exercise: Variables and Data Types


//#include <stdio.h>

//int main() {
//  int myNum = 15;
//  char myLetter = 'D';
//  printf("My number is %d and my letter is %c", myNum, myLetter);
//  return 0;
//}

//#include <stdio.h>
//int main() {
//  printf("My favorite number is: %d\n", 15);
//  printf("My favorite letter is: %c", 'D');
//  return 0;
//}

//You can also assign the value of one variable to another:
// #include <stdio.h>
// int main() {
//   int myNum = 15;
//     int myOtherNum = 23;
//   // Assign the value of myOtherNum (23) to myNum
//   myNum = myOtherNum;
//   // myNum is now 23, instead of 15
//   printf("%d", myNum);
//     return 0;
// }

//Add Variables Together
//  #include <stdio.h>
//  int main() {
//    int x = 10;   int y = 6;
//    int sum = x + y;
//    printf("%d", sum);
//    return 0; }


// #include <stdio.h>
// int main() {
//   int x, y, z;
//   x = y = z = 50;
//   printf("%d", x + y + z);
//   return 0;
// }

// #include <stdio.h>
// int main() {
//   // Student data
//   int studentID = 15;
//   int studentAge = 23;
//   float studentFee = 75.25;
//   char studentGrade = 'B';
//   // Print variables
//   printf("Student id: %d\n", studentID);
//   printf("Student age: %d\n", studentAge);
//   printf("Student fee: %.2f\n", studentFee);
//   printf("Student grade: %c", studentGrade);
//   return 0;
// }

// #include <stdio.h>
// int main() {
//   // Create variables
//   int myNum = 5;               // Integer (whole number)
//   float myFloatNum = 5.99;     // Floating point number
//   char myLetter = 'D';         // Character
 
//   // Print variables
//   printf("%d\n", myNum);
//   printf("%.0f\n", myFloatNum);
//   printf("%c\n", myLetter);
//   return 0;
// }

// Week 2 In-Class Exercise: Variables and Data Types

// #include <stdio.h>
// int main() {
//   int sum1 = 100 + 100;        // 200 (100 + 100)
//   int sum2 = sum1 + 250;      // 450 (200 + 250)
//   int sum3 = sum2 + sum2;     // 900 (450 + 450)
//   printf("%d\n", sum1);
//   printf("%d\n", sum2);
//   printf("%d\n", sum3);
//   return 0;
// }

// #include <stdio.h>
// int main() {
//   int x = 14;
//   int y = 20;
//   printf("%d\n", x + y); // 34
//   printf("%d\n", x - y); // -6
//   printf("%d\n", x * y); // 280
//   printf("%d\n", x / y); // 0
//   printf("%d\n", x % y); // 14
//   int z = 5;
//   ++z;
//   printf("%d\n", z); // 6
//   --z;
//   printf("%d\n", z); // 5
//   return 0;
// }

// #include <stdio.h>
// int main() {
//   int peopleInRoom = 0;
//   // 3 people enter
//   peopleInRoom++;
//   peopleInRoom++;
//   peopleInRoom++;
//   printf("%d\n", peopleInRoom); // 3
//   // 1 person leaves
//   peopleInRoom--;
//   printf("%d\n", peopleInRoom); // 2
//   return 0;
// }

// #include <stdio.h>
// int main() {
//   int savings = 100;
//   savings += 50; // add 50 to savings
//   printf("Total savings: %d\n", savings);
//   return 0;
// }

// #include <stdio.h>
// int main() {
//   int passwordLength = 5;
//   printf("%d\n", passwordLength >= 8); // 0 (false), too short
//   printf("%d\n", passwordLength < 8);  // 1 (true), needs more characters
//   return 0;
// }

// #include <stdio.h>

// int main() {
//   int x = 5;
//   int y = 3;
//   printf("%d", x != y); // returns 1 (true) because 5 is not equal to 3
//   return 0;
// }

// #include <stdio.h>

// int main() {
//   int x = 41;
//   int y = 3;
//   printf("%d", x > y); // returns 1 (true) because 41 is greater than 3
//   return 0;
// }

// #include <stdio.h>

// int main() {
//   int x = 1;
//   int y = 3;
//   printf("%d", x < y); // returns 1 (true) because 1 is less than 3
//   return 0;
// }

// #include <stdio.h>
// int main() {
//   int isLoggedIn = 1;
//   int isAdmin = 0;
//   printf("Regular user: %d\n", isLoggedIn && !isAdmin);
//   printf("Has access: %d\n", isLoggedIn || isAdmin);
//   printf("Not logged in: %d\n", !isLoggedIn);
//   return 0;
// }

// #include <stdio.h>

// int main() {
//   int x = 5;
//   int y = 3;
  
//   // Returns 1 (true) because 5 is greater than 3 AND 5 is less than 10
//   printf("%d", x > 3 && x < 10);
//   return 0;
// }

// #include <stdio.h>

// int main() {
//   int x = 5;
//   int y = 3;
  
//   // Returns 1 (true) because one of the conditions are true (5 is greater than 3, but 5 is not less than 4)
//   printf("%d", x > 3 || x < 4);
//   return 0;
// }

// #include <stdio.h>

// int main() {
//   int x = 5;
//   int y = 3;
  
//   // Returns false (0) because ! (not) is used to reverse the result
//   printf("%d", !(x > 3 && x < 10));
//   return 0;
// }

#include <stdio.h> 

int main() 
{

   char Name[50];
   int age;

   printf("Enter your name: ");
   scanf("%s", &Name);

   printf("Enter your age: ");
   scanf("%d", &age);
   
   return 0;
}