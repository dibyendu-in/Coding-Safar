/*
Name:Dibyendu Barman
Date:13/Oct/2022
Description: A1. Write a program to check if number is odd or even.
Sample Input: Enter the value of 'n' : -2
Sample Output:-2 is negative even number
*/

#include<stdio.h>

int main()

{
    int n; // declaration intiger variable

    printf("Enter the value of 'n': ");
    scanf("%d", &n);  // taking user input

    if(n == 0) // checking 0 or not
        printf("%d is neither odd nor even\n", n);

    if(n < 0) // checking negative value
    {
        if(n % 2 == 0) // checking even or odd
             printf("%d is negative even number\n", n);
        else
             printf("%d is negative odd number\n", n);

    }

    if(n > 0) // checking positive value
    {
        if( n % 2 == 0) // checking even or odd
            printf("%d is positive even number\n", n);
        else
            printf("%d is positive odd number\n", n);

    }
    return 0;
}
