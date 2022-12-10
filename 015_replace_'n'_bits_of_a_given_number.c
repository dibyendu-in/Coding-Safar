/*
Name:Dibyendu Barman
Date:27/Oct/2022
Description: A15. Write a program to replace 'n' bits of a given number
Sample Input:
Enter the number: 10
Enter number of bits: 3
Enter the value: 12

Sample Output:
Result = 12

*/

#include<stdio.h>

int replace_nbits(int, int, int); //

int main()
{
    int num, n, val, res = 0; // variable declaration

    printf("Enter the number: ");
    scanf("%d", &num); // reading the number

    printf("Enter number of bits: ");
    scanf("%d", &n); // reading number of bits

    printf("Enter the value: ");
    scanf("%d", &val); // reading the value

    res = replace_nbits(num, n, val); // calling function
    printf("Result = %d\n", res);

    return 0;
}
int replace_nbits(int num, int n, int val) // called function
{
    int mask, res, r_bits;
    //mask = (1 << n) -1;
    //r_bits = val & mask;
    //res = (num & (~mask)) | r_bits;
    res = (num & ~((1 << n) -1)) | (val & ((1 << n) -1)); // bitwise operation

    return res;
}
