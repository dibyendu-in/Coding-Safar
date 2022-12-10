/*
Name:Dibyendu Barman
Date:27/Nov/2022
Description: A43. Write a program to print all possible combinations of given string.
Sample Input:
Enter a string: abc

Sample Output:
All possible combinations of given string :abc
acb
bca
bac
cab
cba
*/

#include <stdio.h>  
#include <string.h> 

void swap(char[], char[]);          // swap function declaration
void combination(char[], int, int); // combination function declaration
int my_strlen(char[]);              // string length function declaration

int main()

{
    char str[50]; // declaring string
    int ind, n, end; // variable declaration

    printf("Enter a string: ");
    scanf("%[^\n]", str); // reading the input using selective scanf

    for (int i = 0; str[i] != '\0'; i++)
    {
        for (int j = i + 1; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                printf("Error: please enter distinct characters.\n");
                return 0;
            }
        }
    }
    printf("All possible combinations of given string :");
    n = my_strlen(str);         // calling string length function
    combination(str, 0, n - 1); // calling combination function
    getchar();

    return 0;
}

int my_strlen(char str[]) // define string length function
{
    int i, count; // variable declaration

    for (i = 0; str[i] != '\0'; i++)
        count++; // loop for counting length of string
    {
    }
    return count;
}
void combination(char str[], int ind, int end) // define combination function
{
    int i; // variable declaration
    
    if (ind == end)
    {
        printf("%s\n", str); // if index vallue is equal to end value, prints string
    }
    else
        for (i = ind; i <= end; i++) // loop will run index values of string
        {
            swap(str + ind, str + i);       // calling swap function
            combination(str, ind + 1, end); // calling combination function recursively
            swap(str + ind, str + i);       // backtracking calling swap function again
        }
}

void swap(char *str1, char *str2) // define swap function
{
    char temp;

    temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}
