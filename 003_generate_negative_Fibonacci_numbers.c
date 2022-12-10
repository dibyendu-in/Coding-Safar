/*
Name:Dibyendu Barman
Date:15/Oct/2022
Description: A3. Write a program to generate negative Fibonacci numbers.
Sample Input: Enter a number: -13
Sample Output: 0 1 -1 2 -3 5 -8 13
 */

#include<stdio.h>

int main()
{

    int N, num1 = 0, num2 = 1, num, temp = 0 ; // variable declaration

    printf("Enter a number: ");
    scanf("%d", &N); // taking user input

    if(N <= 0) // checking user input negative or not
    {
        N=(N / -1); // making the user negative input to positive

        while(temp <= N)
        {

            printf("%d ", num1);
            num = num1 - num2;
            num1 = num2;
            num2 = num;


            if(num1 < 0)
                temp = num1 / -1; // making the negative number to positive
            else
                temp = num1;

        }
        printf("\n"); // for print a new line

    }
    else
        printf("Invalid input\n");

    return 0;
}
