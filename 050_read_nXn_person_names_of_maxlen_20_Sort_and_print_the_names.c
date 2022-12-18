/*
Name:Dibyendu Barman
Date:17/Dec/2022
Description: A50. Write a program to read n & n person names of maxlen 20. Sort and print the names
Sample Input: ./sort
Enter the size: 5

Enter the 5 names of length max 20 characters in each
[0] -> Delhi
[1] -> Agra
[2] -> Kolkata
[3] -> Bengaluru
[4] -> Chennai

Sample Output:
The sorted names are:
Agra
Bengaluru
Chennai
Delhi
Kolkata
*/

#include <stdio.h>
#include <stdlib.h>

void sort_names(char *name[20], int); // function declaration
int my_strcmp(const char *, const char *); // function declaration
int my_strcpy(char *, char *); // function declaration

int main()
{
    int size = 0; // variable declaration
    
    printf("Enter the size : ");
    scanf("%d", &size);
    
    char *name[20]; // pointer array declaration

    printf("\nEnter the %d names of length max 20 characters in each\n", size);

    for (int i = 0; i < size; i++) // loop to read elements from user
    {
        name[i] = malloc(20); // dynamic memory allocation

        printf("[%d] -> ", i);
        scanf("%s", name[i]); //reading the strings from user
    }

    sort_names(name, size); // calling function
    printf("\nThe sorted names are:\n");

    for (int i = 0; i < size; i++)
    {
        printf("%s\n", *(name + i)); // printing sorted names
    }
    return 0;
}

void sort_names(char *name[20], int size) // function definition
{
    char temp[20];
    int i, j, var = 0;

    for (int i = 0; i < size; i++) // loop to compare each name
    {
        for (int j = i + 1; j < size; j++) // loop to compare each names
        {
            var = my_strcmp((const char *)name[i], (const char *)name[j]); 
            // calling function to compare each names
            if (var == 1)
            {
                my_strcpy(temp, name[i]); // calling function to swap names
                my_strcpy(name[i], name[j]);
                my_strcpy(name[j], temp);
            }
            else
                continue;
        }
    }
}

int my_strcmp(const char *str1, const char *str2) // function definition
{
    int i = 0, flag = 0;

    for (i = 0; *str1 != '\0' || *str2 != '\0'; i++) // loop to comparre each string
    {
        if (*str1 > *str2)
        {
            return 1;
        }
        else if (*str1 < *str2)
        {
            return -1;
        }
        else if (*str1 == *str2)
        {
            *str1++;
            *str2++;
        }
    }
}

int my_strcpy(char *dest, char *src) // function definition
{
    if (dest == NULL)
    {
        return 0;
    }
    char *ptr = dest;

    while (*src != '\0') // loop to copy name from source to destination
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}
