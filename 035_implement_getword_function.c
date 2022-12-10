/*
Name:Dibyendu Barman
Date:16/Nov/2022
Description: A35. Write a program to implement getword function
Sample Input:
Enter the string : Welcome to India

Sample Output:
You entered Welcome and the length is 5
 */
#include<stdio.h>

int getword(char *); // function declaration

int main()
{
    int len = 0; // variable declaration
    char str[100];

    printf("Enter the string : ");
    scanf(" %[^\n]", str); //reading the input using selective scanf

    len = getword(str); // function call

    printf("You entered %s and the length is %d\n", str, len);
}
int getword(char *str) // function definition
{
    int count = 0, count1 = 0;

    while(str[count] != '\0')// getting total number of characters from string
    {
        count++; // incrementing the count
    }

    for (int i = 0; i < count; i++)
    {
        if (str[i] == ' ')
        {
            str[i] = '\0'; // replace the space by null character
            break;
        }
        else
        {
            count1++; // incrementing the count1
        }
    }
    return count1;
}
