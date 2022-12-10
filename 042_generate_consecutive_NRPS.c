/*
Name:Dibyendu Barman
Date:28/Nov/2022
Description: A42. Write a program to generate consecutive NRPS of length n using k distinct character
Sample Input:
Enter the number characters C : 3
Enter the Length of the string N : 6
Enter 3 distinct characters : a b c

Sample Output:
Possible NRPS is abcbca
*/

#include<stdio.h>

void nrps(char *arr, int num, int len) // function definition
{
    int i, count = 0; // initilize variable
    printf("Possible NRPS is ");

    for(i = 0; i < len; i++)
    {
        if((i % num) == 0)
            count++;

        printf("%c", *(arr +(count + i) % num)); // printing the possible NRPS
    }
    printf("\n");
}


int main()
{
    int i, j, num, len;

    printf("Enter the number characters C: ");
    scanf("%d", &num); //reading the number characters

    char str[num];

    printf("Enter the Length of the string N: ");
    scanf("%d", &len); //reading the length of the string

    printf("Enter %d distinct characters: ", num);

    for(i = 0; i < num; i++)
    {
    scanf("%s", &str[i]); //reading the characters
    }

    for(i = 0; i < num; i++)
    {
        for(j = i + 1; j < num; j++)
        {
            if(str[i] == str[j])
            {
                printf("Error : Enter distinct characters\n");
                return 0;
            }

        }
    }
    nrps(str, num, len); // function call to pass input to funtion

    return 0;
}
