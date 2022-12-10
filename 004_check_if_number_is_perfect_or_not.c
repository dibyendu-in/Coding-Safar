/*
Name:Dibyendu Barman
Date:17/Oct/2022
Description: A4. Write a program to check if number is perfect or not
Sample Input: Enter a number: 6
Sample Output: Yes, entered number is perfect number
 */

#include<stdio.h>

int main()
{
    int num, i, sum = 0; // variable declaration

    printf("Enter the number: ");
    scanf("%d", &num); // taking user input

    if(num > 0)  // checking user input number positive or not
    {

        for(i = 1; i <= (num / 2); i++) // for loop
        {
            if(num % i == 0) // checking remainder is zero or not
                sum = sum + i;
        }
        if(sum == num) // checking value of sum & num are equal or not
            printf("Yes, entered number is perfect number\n");
        else
            printf("No, entered number is not a perfect number\n");
    }
    else
        printf("Error : Invalid Input, Enter only positive number\n");

    return 0;
}
