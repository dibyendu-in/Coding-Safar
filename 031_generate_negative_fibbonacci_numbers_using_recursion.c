/*
Name:Dibyendu Barman
Date:13/Nov/2022
Description: A31. Write a program to generate negative fibbonacci numbers using recursion
Sample Input:Enter a number: -21
Sample Output:0, 1, -1, 2, -3, 5, -8, 13, -21
 */

#include<stdio.h>

void neg_fib(int N, int num1, int num2, int num)
{

    int temp = 0; // variable declaration

    num = num1 - num2;
    num1 = num2;
    num2 = num;

    if(num1 < 0)
	temp = num1 / -1; // making the negative number to positive
    else
	temp = num1;

    if(temp <= N)
    {
	printf(", %d", num1);
    }

    if(temp <= N) 
    {
	neg_fib(N, num1, num2, num); //function call
    }
    else
	printf("\n"); // for new line
}

int main()
{

    int N, num1 = 0, num2 = 1, num = 0; // variable declaration

    printf("Enter a number: ");
    scanf("%d", &N); // reading user input

    if(N > 0)	// checking user input negative or not
	printf("Invalid input\n");
    else
    {
	printf("%d", num1);

	N = N / -1; // making the user negative input to positive

	neg_fib(N, num1, num2, num); // function call
    }
}
