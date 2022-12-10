/*
Name:Dibyendu Barman
Date:29/Oct/2022
Description: A22. Write a program to implement your own isalnum() function
Sample Input: Enter the character: a
Sample Output: The character 'a' is an alnum character.
 */

#include<stdio.h>

int my_isalnum(int x) // called function
{

    if((x >= 48 && x <= 57) || (x >= 65 && x <= 90) || (x >= 97 && x <= 122)) // checking condition true or not
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

    ret = my_isalnum(ch); // calling function

    if(ret == 1) // checking the value of ret
	printf("Entered character is alphanumeric character\n");
    else
	printf("Entered character is not alphanumeric character\n"); 

    return 0;
}
