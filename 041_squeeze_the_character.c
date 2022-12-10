/*
Name:Dibyendu Barman
Date:24/Nov/2022
Description: A41. Write a program to squeeze the character in s1 that matches any character in the string s2
Sample Input:
Enter s1 : Dennis Ritchie
Enter s2 : Linux
Sample Output:
After squeeze s1 : Des Rtche
*/

#include <stdio.h>
#include <string.h>

void squeeze(char[], char[]); // function declaration

int main()
{
    char str1[30], str2[30]; // variable declaration

    printf("Enter string1: "); // reading the input using selective scanf
    scanf("%[^\n]", str1);

    getchar();

    printf("Enter string2: "); // reading the input using selective scanf
    scanf("%[^\n]", str2);

    squeeze(str1, str2); // function call

    printf("After squeeze s1 : %s\n", str1); // printing the output string

    return 0;
}

void squeeze(char str1[], char str2[]) // function definition
{
    int a, b, k, count1 = 0, count2 = 0; // variable declaration

    while (str1[a] != '\0') 
    {
        count1++; // counting length of first string
        a++;
    }

    while (str2[b] != '\0')
    {
        count2++; // counting length of second string
        b++;
    }

    for (int i = 0; i < count2; i++)
    {
        for (int j = 0; j < count1; j++)
        {
            if (str1[j] == str2[i]) // comparing each elements of str1 with each elements of str2
            {
                for (k = j; k < count1; k++)
                {
                    str1[k] = str1[k + 1]; // removing the match charcters
                }
                j--;
            }
        }
    }
}
