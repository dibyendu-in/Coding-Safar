/*
Name:Dibyendu Barman
Date:17/Oct/2022
Description: A6. Write a program to print the numbers X format as shown below
Sample Input: Enter the number: 4
Sample Output:

1  4
 23
 23
1  4

 */

#include<stdio.h>

int main()
{
    int num, i, j; // variable declaration

    printf("Enter the number: ");
    scanf("%d", &num); // reading an integer number from user

    for(i = 1; i <= num; i++) // for loop
    {
        for(j = 1; j <= num; j++) // for loop
        {
            if(i == j || (i + j == num + 1)) // checking condition true or not
                printf("%d", j);
            else
                printf(" "); // printing space character

        }
        printf("\n"); // printing new line character
    }

    return 0;
}
