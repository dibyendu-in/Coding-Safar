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

#include <stdio.h>

unsigned int litend_bigend(unsigned int size, unsigned int *num) // function definition
{
    unsigned int big = 0; // variable declaration
    unsigned char temp = 0; // variable declaration

    for (int i = 0; i < size; i++) //swaping
    {
        temp = 0;
        temp = *num | temp;
        big = temp | (big << 8);
        *num = *num >> 8;
    }

    return big; // return to main funtion
}

int main()
{
    unsigned int size, num; // variable declaration

    printf("Enter the size: ");
    scanf("%d", &size); //reading the integer input from user

    printf("Enter any number in Hexadecimal: ");
    scanf("%X", &num); //reading the integer hexadecimal input from user

    unsigned int big = litend_bigend(size, &num); // function call to pass input to funtion

    printf("After conversion %X\n", big); //printing the output

    return 0;
}
