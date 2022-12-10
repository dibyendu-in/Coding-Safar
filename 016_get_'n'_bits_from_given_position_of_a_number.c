/*
Name:Dibyendu Barman
Date:20/Nov/2022
Description: A16. Write a program to get 'n' bits from given position of a number

Sample Input:
Enter the number: 12
Enter number of bits: 3
Enter the pos: 4

Sample Output:
Result = 3
 */

#include<stdio.h>

int get_nbits(int num, int n, int pos) //called function
{
    //int mask = ((1 << n) -1) << ((pos - n) +1); // get the mask value

    //int res = ((num & mask) >> (pos - n) +1); // get the result

    int res = ((num & ((1 << n) -1) << ((pos - n) +1)) >> ((pos - n) +1));

    return res;
}

int main()
{
    int num, n, pos, res;	//variables declaration

    printf("Enter the number: ");
    scanf("%d", &num);                //reading number from user

    printf("Enter number of bits: ");
    scanf("%d", &n);	             //reading number from user

    printf("Enter the pos: ");
    scanf("%d", &pos);		       //reading position value from user

    res = get_nbits(num, n, pos);   //calling function

    printf("Result = %d\n", res);


    return 0;
}
