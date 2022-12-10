/*
Name:Dibyendu Barman
Date:18/Oct/2022
Description: A8. Write a program to print pyramid pattern as below
Sample Input: Enter the number: 5
Sample Output:
4
3 4
2 3 4
1 2 3 4
2 3 4
3 4
4
 */

#include<stdio.h>

int main()

{

    int num, i, j, digit; // variavle declaration

    printf("Enter the number: ");
    scanf("%d", &num); // reading user input

    for(i=1; i <= num; i++) // 1st part Outer for loop
    {
        digit = num - (i - 1);

        for(j = 1; j <= i; j++) // 1st part Inner for loop
        {

            printf("%d ", digit);

            digit = digit + 1;

        }
        printf("\n");
    }

    for(i = 1; i <= (num-1); i++) // 2nd part Outer for loop
    {
        digit = i + 1;

        for(j=(num-i); j >= 1; j--) // 2nd part Inner for loop
        {
            printf("%d ", digit);

            digit = digit + 1;
        }
        printf("\n");
    }

    return 0;
}
