/*
Name:Dibyendu Barman
Date:13/Nov/2022
Description: A30. Write a program to generate fibbonacci numbers using recursion
Sample Input:Enter a number: 8
Sample Output:0, 1, 1, 2, 3, 5, 8
 */

#include<stdio.h>

void pos_fib(int N, int num1, int num2, int num)
{
    num = num1 + num2;
    num1 = num2;
    num2 = num;

    if(num1 <= N)
    {
	printf(", %d", num1);
    }

    if(num1 <= N) 
    {
	pos_fib(N, num1, num2, num); //function call
    }
    else
	printf("\n"); // for new line
}

int main()
{

    int N, num1 = 0, num2 = 1, num = 0; // variable declaration

    printf("Enter a number: ");
    scanf("%d", &N); // reading user input

    if(N < 0)	// checking user input positive or not
	printf("Invalid input\n");
    else
    {
	printf("%d", num1);

	pos_fib(N, num1, num2, num); // function call
    }
}
