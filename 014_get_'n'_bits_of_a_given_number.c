/*
Name:Dibyendu Barman
Date:27/Oct/2022
Description: A14. Write a program to get 'n' bits of a given number
Sample Input:
Enter the number: 10
Enter number of bits: 3

Sample Output:
Result = 2
*/

#include<stdio.h>

int get_nbits(int, int);

int main()
{
    int num, n, res = 0; // variable declaration

    printf("Enter the number: ");
    scanf("%d", &num); // reading the number

    printf("Enter number of bits: ");
    scanf("%d", &n); // reading number of bits

    res = get_nbits(num, n); // calling function

    printf("Result = %d\n", res);

    return 0;
}
int get_nbits(int num, int n) // Called function
{
    int mask, res; // variable declaration

    mask = (1 << n) -1; // Bitwise operation
    res = num & mask; // get n bits

    return res;
}
