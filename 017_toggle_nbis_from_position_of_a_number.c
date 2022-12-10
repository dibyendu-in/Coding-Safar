/*
Name:Dibyendu Barman
Date:17/Oct/2022
Description: A17. Write a program to toggle 'n' bits from given position of a number
Sample Input:
Enter the number: 10
Enter number of bits: 3
Enter the pos: 5

Sample Output:
Result = 50
*/

#include<stdio.h>

int toggle_nbits(int num, int n, int pos) // called function
{
    int mask, res; // variable declaration
    mask = ((1 << n) - 1) << ((pos - n) + 1);
    //printf("Mask= %d\n", mask);
    res = num ^ mask; // bitwise operation

    return res;
}

int main()
{
    int num, n, pos, res = 0; // variable declaration

    printf("Enter the number: ");
    scanf("%d", &num); // reading the number

    printf("Enter number of bits: ");
    scanf("%d", &n); // reading number of bits
    
    printf("Enter the pos: ");
    scanf("%d", &pos); // reading the positionth bit of num

    res = toggle_nbits(num, n, pos); // calling function
    printf("Result = %d\n", res);

    return 0;
}
