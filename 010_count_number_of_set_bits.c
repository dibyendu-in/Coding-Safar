/*
Name:Dibyendu Barman
Date:19/Oct/2022
Description: A10. Write a program to count number of set bits in a given number and print parity.
Sample Input:
Enter the number: 7

Sample Output:
Number of set bits = 3
Bit parity is Odd
 */

#include<stdio.h>

int main()
{
    int num, i, count = 0; // variable declaration

    printf("Enter the number: ");
    scanf("%d", &num); // reading user input

    for(i = 1; i <= 32; i++) // for loop
    {
        if((num & 1) == 1)  // checking condition true or false
            count = count + 1;
        num = num >> 1;  // right shift

    }
    printf("Number of set bits = %d\n", count);

    if((count % 2) == 0)  // checking odd or even
        printf("Bit parity is Even\n");
    else
        printf("Bit parity is Odd\n");

    return 0;
}
