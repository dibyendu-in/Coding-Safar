/*
Name:Dibyendu Barman
Date:03/Nov/2022
Description: A18. Write a program to print 'n' bits from LSB of a number
Sample Input:
Enter the number: 10
Enter number of bits: 12
Binary form of 10: 0 0 0 0 0 0 0 0 1 0 1 0 
Sample Output:

*/

#include<stdio.h>

int print_bits(int num, int n) // called function
{
    int i, mask = 1, mask1;


    printf("Binary form of %d: ", num);

    for(i = n - 1; i >= 0; i--) // printing the binary digits
    {
	mask1 = mask << i;

	if((num & mask1) == mask1)
	    printf("1 ");
	else
	    printf("0 ");
    }
    printf("\n");

    return 0;
}

int main()
{
    int num, n, ret;

    printf("Enter the number: ");
    scanf("%d", &num); // reading the number from user

    printf("Enter number of bits: ");
    scanf("%d", &n); // reading the bit from user

    print_bits(num, n); // calling function
}
