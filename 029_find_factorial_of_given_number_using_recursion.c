/*
Name:Dibyendu Barman
Date:12/Nov/2022
Description: A29. Write a program to find factorial of given number using recursion
Sample Input: Enter the value of N : 7
Sample Output: Factorial of the given number is 5040
 */

#include<stdio.h>

int main()
{
    static int num = 0; //static variable
    static int fact = 1; //static variable

    if(num == 0) //condition checking
    {
	printf("Enter the value of N : ");
	scanf("%d", &num); // reading the number
    }

    if(num >= 0)
    {
	if(num == 0 || num == 1) // condition checking
	    printf("Factorial of the given number is 1\n");
	else
	{
	    fact = fact * num;
	    num--;
	    //printf("%d\n", fact);

	    if(num == 1)
		printf("Factorial of the given number is %d\n", fact);
	    else
		main(); // function call
	}
    }
    else
	printf("Invalid Input\n");
    return 0;
}
