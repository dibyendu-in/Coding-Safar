/*
Name:Dibyendu Barman
Date:20/Oct/2022
Description: A11. Write a program to check N th bit is set or not, if yes, clear the M th bit
Sample Input:
Enter the number: 19
Enter 'N': 1
Enter 'M': 4

Sample Output:
Updated value of num is 3
*/

#include<stdio.h>

int main()
{
    int num, N, M, mask; // variable declaration

    printf("Enter the number: ");
    scanf("%d", &num); // reading the number

    printf("Enter 'N': ");
    scanf("%d", &N); // reading Nth bit

    printf("Enter 'M': ");
    scanf("%d", &M); // reading Mth bit

    mask = 1 << N;

    if((num & mask) == mask && (mask > 0)) // checking Nth bit set or not
    {
        mask = ~(1 << M);
        num = num & mask;
        printf("Updated value of num is %d\n", num);
    }
    else
        printf("Updated value of num is %d\n", num);

    return 0;
}
