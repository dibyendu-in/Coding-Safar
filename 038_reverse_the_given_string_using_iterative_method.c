/*
Name:Dibyendu Barman
Date:18/Nov/2022
Description: A38. Write a program to reverse the given string using iterative method
Sample Input: Enter a string : Hello World
Sample Output: Reverse string is : dlroW olleH
*/

#include <stdio.h>

void reverse_iterative(char *); // function declaration

int main()
{
    char str[50]; // variable declaration

    printf("Enter a string : ");
    scanf("%[^\n]", str); //reading the input using selective scanf

    reverse_iterative(str); // function call

    printf("Reversed string is %s\n", str); // printing the output string

    return 0;
}

void reverse_iterative(char *str) // function definition
{

    int i, count = 0; // variable declaration

    for (i = 0; str[i] != '\0'; i++) // counting length
    {
        if (str[i] != '\0')
        {
            count++;
        }
    }

    for (int i = 0; i < count / 2; i++) // swaping string elements
    {
        char temp = str[count - i - 1];
        str[count - i - 1] = str[i];
        str[i] = temp;
    }
}
