/*
Name:Dibyendu Barman
Date:15/Oct/2022
Description: A2. Write a program to generate positive Fibonacci numbers.
Sample Input: Enter a number: 8
Sample Output: 0 1 1 2 3 5 8
 */

#include<stdio.h>

int main()
{

    int N, num1 = 0, num2 = 1, num ; // variable declaration

    printf("Enter a number: ");
    scanf("%d", &N); // taking user input

    if(N >= 0) // checking user input positive or not
    {


        while(num1 <= N)
        {
            printf("%d ", num1);
            num = num1 + num2;
            num1 = num2;
            num2 = num;
        }
        printf("\n"); // for new line

    }
    else
        printf("Invalid input\n");

    return 0;
}
