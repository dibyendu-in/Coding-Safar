/*
Name:Dibyendu Barman
Date:29/Oct/2022
Description: A25. Write a program to implement your own ispunct() function
Sample Input: Enter the character: $
Sample Output: Entered character is punctuation character
*/

#include<stdio.h>

int my_ispunct(int x) // called function
{

    if((x >= 33 && x <= 47) || (x >= 58 && x <= 63) || (x >= 91 && x <= 96) || (x >= 123 && x <= 126)) // checking condition punctuation character or not
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

    ret = my_ispunct(ch); // calling function

    if(ret == 1) // checking the value of ret
	printf("Entered character is punctuation character\n");
    else
	printf("Entered character is not punctuation character\n"); 

    return 0;
}
