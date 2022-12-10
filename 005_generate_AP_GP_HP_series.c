/*
Name:Dibyendu Barman
Date:18/Oct/2022
Description: A5. Write a program to generate AP, GP, HP series
Sample Input:
Enter the First Number 'A': 2
Enter the Common Difference / Ratio 'R': 3
Enter the number of terms 'N': 5

Sample Output:
AP = 2, 5, 8, 11, 14
GP = 2, 6, 18, 54, 162
HP = 0.500000, 0.200000, 0.125000, 0.090909, 0.071428
*/

#include<stdio.h>

int main()
{

    int A, R, N, ap, gp, i, power = 1; // variable declaration
    float hp;

    printf("Enter the First Number 'A': ");
    scanf("%d", &A);  // reading user input

    printf("Enter the Common Difference / Ratio 'R': ");
    scanf("%d", &R);  // reading user input

    printf("Enter the number of terms 'N': ");
    scanf("%d", &N);  // reading user input

    if(N >= 1) // checking the number positive or not
    {
        printf("AP = ");
        ap = A;
        printf("%d", ap);

        for(i = 1; i <= N - 1; i++) // for loop
        {
            ap = ap + R;
            printf(", %d", ap);
        }
        printf("\n");

        printf("GP = ");
        gp = A;
        printf("%d", gp);

        for(i = 1; i <= N - 1; i++) // for loop
        {
            power = power * R;
            gp = A * power;
            printf(", %d", gp);
        }
        printf("\n");

        printf("HP = ");

        ap = A;
        hp = 1.0 / ap; // type casting for float value
        printf("%f", hp);

        for(i = 1; i <= N - 1; i++) // for loop
        {
            ap = ap + R;
            hp = 1.0 / ap; // type casting for float value
            printf(", %f", hp);
        }
        printf("\n");


    }
    else
        printf("Invalid input\n");


    return 0;
}
