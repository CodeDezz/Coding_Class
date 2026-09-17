// //Week 1 In-Class Exercise: Variables and Data Types


// #include <stdio.h>

// int main() {
//  int myNum = 15;
//  char myLetter = 'D';
//  printf("My number is %d and my letter is %c", myNum, myLetter);
//  return 0;
// }

// #include <stdio.h>
// int main() {
//  printf("My favorite number is: %d\n", 15);
//  printf("My favorite letter is: %c", 'D');
//  return 0;
// }

// //You can also assign the value of one variable to another:
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

// //Add Variables Together
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

// //Week 2 In-Class Exercise: Variables and Data Types

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

// #include <stdio.h> 

// int main() 
// {

//    char Name[50];
//    int age;

//    printf("Enter your name: ");
//    scanf("%s", &Name);

//    printf("Enter your age: ");
//    scanf("%d", &age);
   
//    return 0;
// }

// #include <stdio.h>

// int main() {
//   int time = 8;
  
//   if (time < 12) {
//     printf("Good day.");
//   } else {
//     printf("Good evening.");
//   }
  
//   return 0;
// }

// #include <stdio.h>

// int main() {
//   int time = 18;

//   if (time < 10) {
//     printf("Good morning.");
//   } else if (time < 17) {
//     printf("Good day.");
//   } else {
//     printf("Good evening.");
//   }

//   return 0;
// }

// #include <stdio.h>

// int main() {
//   int time = 33;

//   if (time < 12) 
//   {
//     printf("Good morning.");
//   } 
//   else if (time < 18) 
//   {
//     printf("Good day.");
//   }
//       else if (time < 20) 
//   {
//     printf("Good afternoon.");
//   }
  
//  else 
//  {
//     printf("Good evening.");
//  }

//   return 0;
// }

// #include <stdio.h>
// #include <stdbool.h>
// int main() {

// int age = 17;
// bool isCitizen = false;
// //nested IF statement
// if (age >= 18) 
// {
//   printf("Old enough to vote.\n");

//   if (isCitizen) 
//   {
//     printf("And you are a citizen, so you can vote!\n");
//   } 
//   else 
//   {
//     printf("But you must be a citizen to vote.\n");
//   } 
// } 
// else 
// {
//   printf("Not old enough to vote.\n");
// }
//   return 0;
// }

// #include <stdio.h>

// int main() {

//     int countdown = 3;

//     while (countdown > 0 ) {
//         printf("%d\n", countdown);
//         countdown--;
//     }
//     printf("Happy New Year!\n");

//     return 0;
// }
// #include <stdio.h>

// int main() {
//   int i;

//   for (i = 1; i < 6; i++) {
//     printf("%d\n", i);
//   }

//   return 0;
// }

// #include <stdio.h>

// int main() {
//   int countdown = 5;

//   while (countdown > 1) {
//     printf("%d\n", countdown);
//     countdown--;
//   }
//   printf("Happy New Year!!\n");

//   return 0;
// }

// //fig04_02.c
// //Counter-controlled iteration with the for statement.
// #include <stdio.h>

// int main(void) {
//    // initialization, iteration condition, and increment 
//    // are all included in the for statement header.
//    int counter =1;


//    for (counter; counter < 5; ++counter) 
//    {
//       printf("%d\n", counter);
//     //  ++counter;
//    }
 
//    puts("end of the program"); // outputs a newline
// }

// #include <stdio.h>

// int main() {
//   int i;
  
//   for (i = 0; i <= 10; i = i + 2) {
//     printf("%d\n", i);
//   }
  
//   return 0;
// }

// #include <stdio.h>

// int main() {
//   int sum = 0;
//   int i;

//   for (i = 1; i <= 5; i++) {
//     sum = sum + i;
//   }

//   printf("Sum is %d", sum);
  
//   return 0;
// }

// //increment by 1- default
// #include <stdio.h>

// int main() {
//   int i;

//   for (i = 0; i < 5; i++) {
//     printf("%d\n", i);
//   }

//   return 0;
// }

// #include <stdio.h>

// int main() {
//   int i;

//   for (i = 0; i <= 10; i = i + 2) {
//     printf("%d\n", i);
//   }
  
//   return 0;
// }

// #include <stdio.h>

// int main() {
//   int i;
  
//   for (i = 0; i <= 10; i = i + 2) {
//     printf("%d\n", i);
//   }
  
//   return 0;
// }

// //Calculating compound interest.
// #include <stdio.h>
// #include <math.h>  
 
// int main(void) {
//    double principal = 1500.0; // starting principal
//    double rate = 0.05; // annual interest rate
 
//    // output table column heads
//    printf("%4s%21s\n", "Year", "Amount on deposit");

//  // calculate amount on deposit for each of ten years
//    for (int year = 10; year >= 0; year--) {
 
//       // calculate new amount for specified year
//       double amount = principal * pow(2.0 + rate, year);
 
//       // output one table row
//       printf("%4d%21.2f\n", year, amount);
//    }
// }

// #include <stdio.h>

// int main() {
//   int i;
  
//   for (i = 0; i < 10; i++) 
//   {
//     if (i == 4) { break; }
//     printf("%d\n", i);
//   }
   
//  printf("end of the program");
//   return 0;
// }

// #include <stdio.h>
// int main() {
  
//     // Switch variable
//     int var = 10;
    
//     // Switch statement
//     switch (var) {
//     case 1:
//         printf("Case 1 is Matched.");
//         break;
//     case 2:
//         printf("Case 2 is Matched.");
//         break;
//     case 3:
//         printf("Case 3 is Matched.");
//         break;
//     default:
//         printf("Default case is Matched.");
//         break;
//     }
//     return 0;
// }

// #include <stdio.h>

// int main() {
//   int i;
  
//   for (i = 0; i <= 10; i++) 
//   {
//     if (i == 4) 
//     {
//       continue;
//     }
//     printf("%d\n", i);
//   }   
//       printf("program ended");
//   return 0;
// }

// #include <stdio.h>
// int main() {
//   int i;
//   for (i = 0; i < 23; i++) 
//   {
//     if (i == 2) {      continue;    }
//     if (i == 5) {      continue;    }
//     if (i == 7) {      continue;    }
//     if (i == 9) {      continue;    }
//     if (i == 10) {      break;    }
//     if (i == 10) {      break;    }
//     if (i == 11) {      break;    }

//     printf("%d\n", i);
//     printf("program running\n");
//   }
//   printf("program stopped\n");
//   return 0;
// }

// #include <stdio.h>

// // Create a function
// void myFunction() 
// {
//   printf("I just got executed 1\n");
//     printf("I just got executed 2!\n");
//       printf("I just got executed 3!\n");
// }

// int main(void) {
//   myFunction(); // call the function
//   return 0;
// }

// Function definition
// int add(int a, int b) {
//     return a + b;
// }

// int main() {
    
//     // Function call
//     int result = add(5, 3);
//     printf("The sum is: %d", result);
//     return 0;
// }

// #include <stdio.h>

// // function definition
// int square(int x)
// {
//     return x * x;
// }

// int main()
// {

//     // Calling the function
//     int result = square(5);
    
//     printf("Square of 5 is: %d", result);

//     return 0;
// }

// #include <stdio.h>

// void myFunction(char name[]) {
//   printf("Hello %s\n", name);
// }

// int main() {
//   myFunction("Liam");
//   myFunction("Jenny");
//   myFunction("Anja");
//   return 0;
// }

// //Multiple parameters:
// #include <stdio.h>

// void myFunction(char name[], int age) {
//   printf("Hello %s. You are %d years old\n", name, age);
// }

// int main(void) {
//   myFunction("Liam", 3);
//   myFunction("Jenny", 14);
//   myFunction("Anja", 30);
//   return 0;
// }

// #include <stdio.h>

// void calculateSum(int x, int y) {
//   int sum = x + y;
//   printf("The sum of %d + %d is: %d\n", x, y, sum);
// }

// int main() {
//   calculateSum(5, 3);
//   calculateSum(8, 2);
//   calculateSum(15, 15);
//   return 0;
// }
// #include <stdio.h>

// //Function definition
// int square(int x)
// {
//     return x * x;
// }

// int main()
// {

//     // Calling the function
//     int result = square(5);
    
//     printf("Square of 5 is: %d", result);

//     return 0;
// }
// #include <stdio.h>

// //Function definition
// int add(int a, int b, int c) 
// {
//     return a + b + c;
// }

// int result;

// int main() {
//     // Function call
//     result = add(5, 3, 10);
//     printf("The sum is: %d", result);
//     return 0;
// }
// #include <stdio.h>

// int main() {
//   int myNumbers[] = {25, 50, 75, 100};
//   printf("%d", myNumbers[0]);
 
//   return 0;
// }



// //Change the element

// #include <stdio.h>

// int main() {
//   int myNumbers[] = {25, 50, 75, 100};
//   myNumbers[0] = 33;

//   printf("%d", myNumbers[0]);
//   printf("%d", myNumbers[1]);
//   printf("%d", myNumbers[2]);
//   printf("%d", myNumbers[3]);
 
//   return 0;
// }
// //get array size

// #include <stdio.h>

// int main() {
//   int myNumbers[] = {10, 25, 50, 75, 100};
//   printf("%zu", sizeof(myNumbers[0]));
 
//   return 0;
// }



// lenght

// #include <stdio.h>

// int main(void)
// {
//     unsigned int counter = 0;
    
//     while (++counter <= 10){
//         printf("%u\n", counter);
//     }
// }

// #include <stdio.h>

// int main(void)
// {
//     for (unsigned int counter = 1; counter <= 10; ++counter){
//         printf("%u\n", counter);
//     }   
// }


// #include <stdio.h>
// function main begins program execution 
// int main(void) {
//    int integer1 = 0; // will hold first number user enters 
//    int integer2 = 0; // will hold second number user enters
//    int integer3 = 0;
//    int integer4 = 0;

//     printf("Enter first integer: "); // prompt
//     scanf("%d", &integer1); // read an integer
//     printf("Enter second integer: "); // prompt
//     scanf("%d", &integer2); // read an integer
//     printf("Enter third integer: ");
//     scanf("%d", &integer3);
//     printf("Enter fourth integer: ");
//     scanf("%d", &integer4);
//   int sum = 0; // variable in which sum will be stored
//   sum = integer1 + integer2 + integer3 + integer4; // assign total to sum 
//     printf("Sum is %d\n", sum); // print sum 

// }

// #include <stdio.h>
// int main()
// {
//     int num;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     if(num > 0)
//         printf("You entered: Positive Number");
//     else if(num < 0)
//         printf("You entered: Negative Number");
//     else
//         printf("You entered: Zero");

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int a, b;
//     char op;

//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);

//     printf("Enter operator (+ - * /): ");
//     scanf(" %c", &op);

//     switch(op)
//     {
//         case '+':
//             printf("Result = %d", a+b);
//             break;

//         case '-':
//             printf("Result = %d", a-b);
//             break;

//         case '*':
//             printf("Result = %d", a*b);
//             break;

//         case '/':
//             if(b != 0)
//                 printf("Result = %.2f", (float)a/b);
//             else
//                 printf("Division by zero not allowed");
//             break;

//         default:
//             printf("Invalid Operator");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int n, i;

//     printf("Enter a number: ");
//     scanf("%d", &n);

//     for(i=1; i<=10; i++)
//     {
//         printf("%d x %d = %d\n", n, i, n*i);
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int n, i=1, sum=0;

//     printf("Enter N: ");
//     scanf("%d", &n);

//     while(i <= n)
//     {
//         sum += i;
//         i++;
//     }

//     printf("Sum = %d", sum);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int arr[5];
//     int *ptr = arr;
//     int i, sum = 0;
//     int max, min;

//     printf("Enter 5 integers:");

//     for(i = 0; i < 5; i++)
//     {
//         scanf("%d", ptr + i);
//     }

//     max = min = *ptr;

//     for(i = 0; i < 5; i++)
//     {
//         if(*(ptr + i) > max)
//             max = *(ptr + i);

//         if(*(ptr + i) < min)
//             min = *(ptr + i);

//         sum += *(ptr + i);
//     }

//     printf("\nMaximum = %d", max);
//     printf("\nMinimum = %d", min);
//     printf("\nAverage = %.2f", (float)sum / 5);

//     return 0;
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
// int main() {
//   int x = 10;
//   int y = 0;
  
//   int result = x / y;
 
 
//   printf("%d\n", result); // not possible
//   return 0;
// }
// C program for the above approach
// #include <math.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// // Function to implement the game
// int game(char you, char computer)
// {
//     // If both the user and computer
//     // has choose the same thing
//     if (you == computer)
//         return -1;

//     // If user's choice is stone and
//     // computer's choice is paper
//     if (you == 's' && computer == 'p')
//         return 0;

//             // If user's choice is paper and
//             // computer's choice is stone
//             else if (you == 'p' && computer == 's') return 1;

//     // If user's choice is stone and
//     // computer's choice is scissor
//     if (you == 's' && computer == 'z')
//         return 1;

//     // If user's choice is scissor and
//     // computer's choice is stone
//     else if (you == 'z' && computer == 's')
//         return 0;

//     // If user's choice is paper and
//     // computer's choice is scissor
//     if (you == 'p' && computer == 'z')
//         return 0;

//     // If user's choice is scissor and
//     // computer's choice is paper
//     else if (you == 'z' && computer == 'p')
//         return 1;
// }

// // Driver Code
// int main()
// {
//     // Stores the random number
//     int n;

//     char you, computer, result;

//     // Chooses the random number
//     // every time
//     srand(time(NULL));

//     // Make the random number less
//     // than 100, divided it by 100
//     n = rand() % 100;

//     // Using simple probability 100 is
//     // roughly divided among stone,
//     // paper, and scissor
//     if (n < 33)

//         // s is denoting Stone
//         computer = 's';

//     else if (n > 33 && n < 66)

//         // p is denoting Paper
//         computer = 'p';

//     // z is denoting Scissor
//     else
//         computer = 'z';

//     printf("\n\n\n\n\t\t\t\tEnter s for STONE, p for PAPER and z for SCISSOR\n\t\t\t\t\t\t\t");

//     // input from the user
//     scanf("%c", &you);

//     // Function Call to play the game
//     result = game(you, computer);

//     if (result == -1) {
//         printf("\n\n\t\t\t\tGame Draw!\n");
//     }
//     else if (result == 1) {
//         printf("\n\n\t\t\t\tWow! You have won the game!\n");
//     }
//     else { 
//         printf("\n\n\t\t\t\tOh! You have lost the game!\n");
//     }
//         printf("\t\t\t\tYOu choose : %c and Computer choose : %c\n",you, computer);

//     return 0;
// }

// #include <ctype.h>
// #include <stdbool.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <time.h>

// #define MAX_WORD_LENGTH 50
// #define MAX_TRIES 6

// // Structure to hold a word and its hint
// struct WordWithHint {
//     char word[MAX_WORD_LENGTH];
//     char hint[MAX_WORD_LENGTH];
// };

// // Function declarations
// void displayWord(const char guessedWord[]);
// void drawHangman(int tries);

// int main()
// {
//     // Seed the random number generator
//     srand(time(NULL));

//     // Array of words with hints
//     struct WordWithHint wordList[] = {
//         {"geeksforgeeks", "Computer coding"},
//         {"elephant", "A large mammal with a trunk"},
//         {"pizza", "A popular Italian dish"},
//         {"beach", "Sandy shore by the sea"}
//     };

//     // Select a random word
//     int wordIndex = rand() % 4;

//     const char *secretWord = wordList[wordIndex].word;
//     const char *hint = wordList[wordIndex].hint;

//     int wordLength = strlen(secretWord);

//     // Store the current guessed word
//     char guessedWord[MAX_WORD_LENGTH];

//     // Track guessed letters
//     bool guessedLetters[26] = {false};

//     // Initialize guessedWord with '_'
//     for (int i = 0; i < wordLength; i++) {
//         guessedWord[i] = '_';
//     }
//     guessedWord[wordLength] = '\0';

//     printf("Welcome to Hangman!\n");
//     printf("Hint: %s\n", hint);

//     int tries = 0;

//     while (tries < MAX_TRIES) {

//         printf("\n");
//         displayWord(guessedWord);
//         drawHangman(tries);

//         char guess;
//         printf("Enter a letter: ");
//         scanf(" %c", &guess);

//         guess = tolower(guess);

//         // Validate input
//         if (guess < 'a' || guess > 'z') {
//             printf("Please enter a valid alphabet.\n");
//             continue;
//         }

//         // Check duplicate guess
//         if (guessedLetters[guess - 'a']) {
//             printf("You've already guessed that letter. Try again.\n");
//             continue;
//         }

//         guessedLetters[guess - 'a'] = true;

//         bool found = false;

//         // Search the guessed letter
//         for (int i = 0; i < wordLength; i++) {
//             if (secretWord[i] == guess) {
//                 guessedWord[i] = guess;
//                 found = true;
//             }
//         }

//         if (found) {
//             printf("Good guess!\n");
//         } else {
//             printf("Sorry, the letter '%c' is not in the word.\n", guess);
//             tries++;
//         }

//         // Check win condition
//         if (strcmp(secretWord, guessedWord) == 0) {
//             printf("\n");
//             displayWord(guessedWord);
//             printf("\nCongratulations! You've guessed the word: %s\n",
//                    secretWord);
//             break;
//         }
//     }

//     // Check lose condition
//     if (tries >= MAX_TRIES) {
//         drawHangman(tries);
//         printf("\nSorry, you've run out of tries.\n");
//         printf("The word was: %s\n", secretWord);
//     }

//     return 0;
// }

// // Function to display the guessed word
// void displayWord(const char guessedWord[])
// {
//     printf("Word: ");

//     for (int i = 0; guessedWord[i] != '\0'; i++) {
//         printf("%c ", guessedWord[i]);
//     }

//     printf("\n");
// }

// // Function to draw the Hangman
// void drawHangman(int tries)
// {
//     const char *hangmanParts[] = {
//         "     _________",
//         "    |         |",
//         "    |         O",
//         "    |        /|\\",
//         "    |        / \\",
//         "    |"
//     };

//     printf("\n");

//     for (int i = 0; i <= tries && i < 6; i++) {
//         printf("%s\n", hangmanParts[i]);
//     }
// }

#include <stdio.h>

// 1. Define the inner struct first
struct Address {
    char city[50];
    int zip_code;
};

// 2. Define the outer struct containing an instance of Address
struct Person {
    char name[50];
    struct Address home_address; // Inner struct instance
};

int main() {
    // Initialize using nested braces
    struct Person p1 = {"Alice", {"New York", 10001}};

    // Access nested fields by chaining dot operators (.)
    printf("Name: %s\n", p1.name);
    printf("City: %s\n", p1.home_address.city);
    printf("Zip:  %d\n", p1.home_address.zip_code);

    return 0;
}