/*
Name:Dibyendu Barman
Date:01/Dec/2022
Description: A46. Write a program to Variance calculation with dynamic arrays
Sample Input:
Enter the no. of elements : 10
Enter the 10 elements:
[0] -> 9
[1] -> 12
[2] -> 15
[3] -> 18
[4] -> 20
[5] -> 22
[6] -> 23
[7] -> 24
[8] -> 26
[9] -> 31

Sample Output:
Variance is 40.000000
*/

#include <stdio.h>
#include <stdlib.h>

float variaance(int *ptr, int size) // function definition
{
    int i, sum = 0, mean; // variable declaration

    for (i = 0; i < size; i++)
    {
        sum = sum + ptr[i];
    }

    mean = sum / size;

    int D, D_sqr, sum2 = 0; // variable declaration

    for (i = 0; i < size; i++)
    {
        D = ptr[i] - mean;

        D_sqr = D * D;

        sum2 = sum2 + D_sqr;
    }

    float var = (float)sum2 / size; // type casting to float
    printf("Variance is %f\n", var); //printing the output
}

int main()
{
    int size, i;
    printf("Enter the no. of elements : ");
    scanf("%d", &size); //reading the integer input from user

    int *ptr = malloc(size * sizeof(int)); //dinamic memory allocation

    printf("Enter the 10 elements:\n");
    for (i = 0; i < size; i++)
    {
        printf("[%d] -> ", i);
        scanf("%d", &ptr[i]); //reading the array input from user
    }

    variaance(ptr, size); // function call to pass input to funtion

    return 0;
}
