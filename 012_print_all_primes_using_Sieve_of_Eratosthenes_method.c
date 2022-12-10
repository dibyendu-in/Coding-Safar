/*
Name:Dibyendu Barman
Date:26/Oct/2022
Description: A12. Write a program to print all primes using Sieve of Eratosthenes method
Sample Input: Enter the value of 'n': 20
Sample Output: The primes less than or equal to 20 are: 2, 3, 5, 7, 11, 13, 17, 19
 */

#include<stdio.h>

int main()
{
    int num, i, j; // variable declaration

    printf("Enter the value of 'n': ");
    scanf("%d", &num); // reading the value of 'n'

    if(num > 1) // checking the number positive or not
    {
        int arr[num-1]; // array variable declaration

        for(i = 0; i <= (num-1); i++)
        {
            arr[i] = 2 + i; // storing array elements one by one from 2
        }
        for(i = 0; i <= ((num) / 2); i++)
        {
            for(j = i + 1; j <= (num - 1); j++)
            {
                if(arr[i] != 0 && (arr[j] % arr[i]) == 0)
                    arr[j] = 0; // making 0 which is multiples of number

            }
        }
        printf("The primes less than or equal to %d are : %d", num, arr[0]);

        for(i = 1; i < num - 2; i++)
        {
            if(arr[i] != 0) // printing the number except 0
                printf(", %d", arr[i]);
        }
        printf("\n");
    }
    else
        printf("Please enter a positive number which is > 1\n");
    return 0;
}
