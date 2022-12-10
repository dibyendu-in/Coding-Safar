/*
Name:Dibyendu Barman
Date:29/Oct/2022
Description: A23. Write a program to implement your own isxdigit() function
Sample Input: Enter the character: a
Sample Output: Entered character is an hexadecimal digit
 */

#include<stdio.h>

int is_xdigit(int x) // called function
{

    if((x >= 48 && x <= 57) || (x >= 65 && x <= 70) || (x >= 97 && x <= 102)) // checking condition true or not
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

    ret = is_xdigit(ch); // calling function

    if(ret == 1) // checking the value of ret
	printf("Entered character is an hexadecimal digit\n");
    else
	printf("Entered character is not an hexadecimal digit\n"); 

    return 0;
}
