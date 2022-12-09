/*
Name:Dibyendu Barman
Date:05/Dec/2022
Description: A47. Write a program to convert Little Endian data to Big Endian
Sample Input:
Enter the size: 4
Enter any number in Hexadecimal: 12345678

Sample Output:
After conversion 78563412
*/

#include<stdio.h>

int litend_bigend(unsigned int size, unsigned int num)
{
    unsigned int *iptr = &num;
    signed char *cptr = &num;
    *cptr = 0x12;
    printf("The number is %X\n", num);

}

int main()
{
    unsigned int size, num;

    printf("Enter the size: ");
    scanf("%d", &size);

    printf("Enter any number in Hexadecimal: ");
    scanf("%X", &num);

    litend_bigend(size, num);

    return 0;
}