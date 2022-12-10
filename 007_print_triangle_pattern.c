/*
Name:Dibyendu Barman
Date:17/Oct/2022
Description: A7. Write a program to print triangle pattern as shown below
Sample Input: Enter the number: 5
Sample Output:
1 2 3 4 5
6 _ _ 7
8 _ 9
10 11
12

 */

#include<stdio.h>

int main()
{
    int num, i, j, digit = 0; // variable declaration

    printf("Enter the number: ");
    scanf("%d", &num); // reading an integer number from user

    for(i = num; i >= 1; i--) // for loop
    {
        for(j = i; j >= 1; j--) // for loop
        {

            if(i == num || j == i || j == 1) // checking condition true or not
            {

                digit = digit + 1; // if condition true then the digit value will increase by 1

                printf("%d ", digit);
            }
            else
                printf(" "); // printing space character

        }
        printf("\n"); // printing new line character
    }

    return 0;
}
