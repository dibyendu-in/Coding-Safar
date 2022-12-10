/*
Name:Dibyendu Barman
Date:29/Oct/2022
Description: A23. Write a program to implement your own islower() function
Sample Input: Enter the character: a
Sample Output: Entered character is lower case alphabet
 */


#include<stdio.h>

int my_islower(int x) // called function
{

    if(x >= 97 && x <= 122) // checking condition true or not
	return 1;
    else
	return 0;
}

int main()
{
    char ch; // character variable declaration
    int ret; // integer variable declaration
    printf("Enter the character: ");
    scanf("%c", &ch); // reading the character from user

    ret = my_islower(ch); // calling function

    if(ret == 1) // checking the value of ret
	printf("Entered character is lower case alphabet\n");
    else
	printf("Entered character is not lower case alphabet\n"); 

    return 0;
}
