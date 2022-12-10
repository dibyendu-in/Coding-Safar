/*
Name:Dibyendu Barman
Date:29/Oct/2022
Description: A19. Write a program to put the (b-a+1) lsb’s of num into val[b:a]
Sample Input:
Enter the value of 'num' : 11
Enter the value of 'a' : 3
Enter the value of 'b' : 5
Enter the value of 'val': 174

Sample Output:
Result : 158
 */


#include<stdio.h>

int replace_nbits(int num, int a, int b, int val) // called function
{
    int nbit, mask1, gbit, mask2, cbit, mask3, res = 0; // variable declaration
    nbit = b - a + 1; //no of bits
    mask1 = (1 << nbit) - 1;
    //printf("Mask1= %d\n", mask1);
    gbit = num & mask1; // get n bits from num
    mask2 = ~(((1 << nbit) - 1) << ((b - nbit) + 1));
    //printf("Mask2= %d\n", mask2);
    cbit = val & mask2; // clear n bits from val
    mask3 = gbit << ((b - nbit) + 1);
    //printf("Mask3= %d\n", mask3);
    res = cbit | mask3; // replace n bits from num to val

    return res;
}

int main()
{
    int num, a, b, val, res = 0; // variable declaration

    printf("Enter the value of 'num' : ");
    scanf("%d", &num); // reading the number

    printf("Enter the value of 'a' : ");
    scanf("%d", &a); // reading the value of 'a'

    printf("Enter the value of 'b' : ");
    scanf("%d", &b); // reading the value of 'b'

    printf("Enter the value of 'val': ");
    scanf("%d", &val); // reading the value of 'val'

    res = replace_nbits(num, a, b, val); // calling function
    printf("Result = %d\n", res);

    return 0;
}
