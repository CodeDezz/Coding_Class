/*Arrays Team Project 
Win, Patrick and Preston*/

#include <stdio.h>

 

int main()

{

    int n;

    int i, j;

    int temp;

    int aboveAverage = 0;

    int highest, lowest;

    float average = 0;

    int scores[100];   // Allows up to 100 students

 

    printf("Enter number of students: ");

    scanf("%d", &n);

 

    // Input scores

    printf("Enter %d scores:\n", n);

    for(i = 0; i < n; i++)

    {

        scanf("%d", &scores[i]);

        average += scores[i];

    }

 

    // Calculate average

    average = average / n;

 

    // Find highest and lowest

    highest = scores[0];

    lowest = scores[0];

 

    for(i = 1; i < n; i++)

    {

        if(scores[i] > highest)

            highest = scores[i];

 

        if(scores[i] < lowest)

            lowest = scores[i];

    }

 

    // Count students above average

    for(i = 0; i < n; i++)

    {

        if(scores[i] > average)

            aboveAverage++;

    }

 

    // Sort scores using Bubble Sort

    for(i = 0; i < n - 1; i++)

    {

        for(j = 0; j < n - i - 1; j++)

        {

            if(scores[j] > scores[j + 1])

            {

                temp = scores[j];

                scores[j] = scores[j + 1];

                scores[j + 1] = temp;

            }

        }

    }

 

    // Display results

    printf("\nAverage score: %.2f\n", average);

    printf("Highest score: %d\n", highest);

    printf("Lowest score: %d\n", lowest);

    printf("Number above average: %d\n", aboveAverage);

 

    printf("Sorted scores: ");

    for(i = 0; i < n; i++)

    {

        printf("%d ", scores[i]);

    }

 

    printf("\n");

 

    return 0;

}