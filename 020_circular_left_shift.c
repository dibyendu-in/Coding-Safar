/*
Name:Dibyendu Barman
Date:02/Nov/2022
Description: Write a program to implement Circular left shift
Sample Input:
Enter num: 12
Enter n: 3

Sample Output:
Result in Binary: 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1 0 0 0 0 0 

 */

#include<stdio.h>

int circular_left(int num, int n) // called function
{
    int ret = 0, mask1, g_bit;

    mask1 = ((1 << n) -1) << (32 - n); // to get nbit from msb side


    g_bit = ((num & mask1) >> (32 - n)) & ((1 << n) -1); // after getting nbit shifted to lsb


    ret = (num << n) | g_bit; // replace nbit from msb to lsb 

    return ret;
}

int print_bits(int ret) // called function
{
    int i, mask = 1, mask1;

    printf("Result in Binary: ");

    for(i=31; i >= 0; i--)
    {
	mask1 = mask << i;

	if((ret & mask1) == mask1)
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

    printf("Enter the num: ");
    scanf("%d", &num); // reading the number from user

    printf("Enter n: ");
    scanf("%d", &n); // reading the nbit from user

    ret = circular_left(num, n); // calling function

    print_bits(ret); // calling function
}
