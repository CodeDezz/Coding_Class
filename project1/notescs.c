// Week 7 pointers

// #include <stdio.h>

// int main() {
//     int age = 25;
//     int *xyz = &age;
    
//     printf("Age = %d\n", *xyz);
//     printf("Address = %p\n", xyz);

//     *xyz = 30;   // Change value using pointer
//     *xyz = 500;   // Change value using pointer

//     printf("Age = %d\n", age);
//     printf("Address = %p\n", xyz);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int num = 100;
//     int *ptr = &num;   // ptr stores address of num

//     printf("Value of num = %d\n", num);
//     printf("Address of num = %p\n", &num);
//     printf("Value stored in ptr = %p\n", ptr);
//     printf("Value pointed by ptr = %d\n", *ptr);

//     return 0;
// }

// #include <stdio.h>
// void swap(int *a, int *b)
// {
//     int temp = *a;
// 	*a = *b;
// 	*b = temp;
// }
// int main() {
// 	int x = 15, y = 1;
// 	printf("Before calling the function swap\n");
//     printf("value of x %d\n", x);
//     printf("value of y %d\n", y);
// 	printf("value of &x %p\n", &x);
//     printf("value of &y %p\n", &y);

// 	swap(&x, &y); 
// 	printf("After calling the function swap\n");
// 	printf("x = %d, y = %d\n", x, y);

// 	return 0;
// }

// #include <stdio.h>
// void printArray(int *arr, int size) 
// {
//     for(int i = 0; i < size; i++) 
//     {
//         printf("%d ", arr[i]);
//     }
// }
// int main() {
//     int nums[] = {34, 27, 29, 48, 57};
//     printArray(nums, 5);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     char *message = "Hello World world word done";
//    //     int *num = 50;
    
//     // H=0, e=1, l=2, l=3, o=4,=5, W=6, o=7, r=8,l=9,d=10 \0 

//     while(*message != '\0') 
//     {
//         printf("%c", *message);
//         message++;
//     }

//     return 0;
// }
/* To access members of a structure, use the dot syntax (.): Example */
// #include <stdio.h>

// // Create a structure called myStructure
// struct myStructure {
//   int myNum;
//   char myLetter;
// };
// int main() {
//   // Create a structure variable of myStructure called s1
//   struct myStructure s1;
//   s1.myNum = 13;
//   s1.myLetter = 'B';
//   struct myStructure s2;
//   s2.myNum = 14;
//   s2.myLetter = 'A';
//   // Print values
//   printf("My number: %d ", s1.myNum);
//   printf("My letter: %c\n", s1.myLetter);
//   printf("My number: %d ", s2.myNum);
//   printf("My letter: %c\n", s2.myLetter);
//   return 0;
// }

// #include <stdio.h>
// struct Student {int id; char name[30]; float marks;};
// int main() {
//     struct Student s[3];
//     int i;
//     for(i=0;i<3;i++)
//     {
//         printf("\nStudent %d\n", i+1);
//         printf("ID: ");
//         scanf("%d",&s[i].id);

//         printf("Name: ");
//         scanf("%s",s[i].name);

//         printf("Marks: ");
//         scanf("%f",&s[i].marks);
//     }

//     printf("\nStudent Records\n");

//     for(i=0;i<3;i++)
//     {
//         printf("%d %s %.2f\n",
//                s[i].id,
//                s[i].name,
//                s[i].marks);
//     }

//     return 0;
// }

// #include <stdio.h>
// struct Employee {int id; char name[30]; float basic; float hra; float da; float gross; };
// int main()
// {
//     struct Employee e;
//     scanf("%d",&e.id);
//     scanf("%s",e.name);
//     scanf("%f",&e.basic);
//     e.hra = 0.20*e.basic;
//     e.da = 0.10*e.basic;
//     e.gross = e.basic + e.hra + e.da;
//     printf("\nGross Salary = %.2f",e.gross);
//     return 0;
// }

// #include <stdio.h>

// struct Date { int day; int month; int year;};
// struct Student {int id; char name[30]; struct Date dob;};

// int main()
// {
//     struct Student s;
//     scanf("%d",&s.id);
//     scanf("%s",s.name);
//     scanf("%d%d%d", &s.dob.day, &s.dob.month,&s.dob.year);

//     printf("\nDOB = %d/%d/%d", s.dob.day, s.dob.month, s.dob.year);

//     return 0;
// }

// #include <stdio.h>

// struct Rectangle {int length; int width;};

// int area(struct Rectangle r)
// {
//     return r.length * r.width;
// }

// int main()
// {
//     struct Rectangle r;

//     scanf("%d%d", &r.length, &r.width);

//     printf("Area = %d", area(r));

//     return 0;
// }

// #include <stdio.h>
// struct Student
// { int id; char name[30];};

// int main()
// {
//     struct Student s;
//     struct Student *ptr;

//     ptr=&s;

//     scanf("%d",&ptr->id);
//     scanf("%s",ptr->name);

//     printf("%d %s",
//            ptr->id,
//            ptr->name);

//     return 0;
// }

// #include <stdio.h>

// struct Student
// { char name[30]; float marks;};

// int main()
// {
//     struct Student s[5], temp;
//     int i,j;
//     for(i=0;i<5;i++)
//         scanf("%s%f",s[i].name,&s[i].marks);

//     for(i=0;i<4;i++)
//     {
//         for(j=i+1;j<5;j++)
//         {
//             if(s[i].marks<s[j].marks)
//             {
//                 temp=s[i];
//                 s[i]=s[j];
//                 s[j]=temp;
//             }
//         }
//     }

//     printf("\nSorted List\n");

//     for(i=0;i<5;i++)
//         printf("%s %.2f\n",s[i].name,s[i].marks);

//     return 0;
// }