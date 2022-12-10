/*
Name:Dibyendu Barman
Date:26/Oct/2022
Description: A13. Write a program to find the median of two unsorted arrays
Sample Input:
Enter the 'n' value for Array A: 5
Enter the 'n' value for Array B: 5

Enter the elements one by one for Array A: 3 2 8 5 4
Enter the elements one by one for Array B: 12 3 7 8 5

Sample Output:
Median of array1: 4
Median of array2: 7
Median of both array: 5.5
 */

#include<stdio.h>

int main()
{
    int size1, size2, i, j, temp; // integer variable declaration
    float median1, median2, median3; // floating variable declaration

    printf("Enter the 'n' value for Array A: ");
    scanf("%d", &size1);  // reading the size of array1
    printf("Enter the 'n' value for Array B: ");
    scanf("%d", &size2);  // reading the size of array2

    int arr1[size1], arr2[size2]; // array variable declaration

    printf("Enter the elements one by one for Array A: ");

    for(i = 0; i <= (size1 - 1); i++)
        scanf("%d", &arr1[i]); // reading the array1 elements one by one

    //  for(i = 0; i <= (size1 - 1); i++)
    //  printf("%d ", arr1[i]);

    for(i = 0; i < size1 -1; i++)  // Bubble Sort Method
    {
        for(j = 0; j < size1 -1 -i; j++)
            if(arr1[j] > arr1[j+1])
            {
                temp = arr1[j];
                arr1[j] = arr1[j+1];
                arr1[j+1] = temp;
            }
    }
    //   for(i = 0; i <= (size1 - 1); i++)
    //  printf("%d ", arr1[i]);

    printf("Enter the elements one by one for Array B: ");

    for(i = 0; i <= (size2 - 1); i++)
        scanf("%d", &arr2[i]); // reading the array2 elements one by one

    //    for(i = 0; i <= (size2 - 1); i++)
    //  printf("%d ", arr2[i]);



    for(i = 0; i < size2 -1; i++)  // Bubble Sort Method
    {
        for(j = 0; j < size2 -1 -i; j++)
            if(arr2[j] > arr2[j+1])
            {
                temp = arr2[j];
                arr2[j] = arr2[j+1];
                arr2[j+1] = temp;
            }
    }

    //    for(i = 0; i <= (size2 - 1); i++)
    //  printf("%d ", arr2[i]);



    if(size1 % 2 == 0) // checking the middile elements of the array1
    {
        median1 =(float)(arr1[(size1/2) -1] + arr1[size1/2]) / 2;
        printf("Median of array1 : %g\n", median1);
    }
    else
    {
        median1 = arr1[(size1/2)];
        printf("Median of array1 : %g\n", median1);
    }

    if(size2 % 2 == 0) // checking the middile elements of the array2
    {
        median2 =(float)(arr2[(size2/2) -1] + arr2[size2/2]) / 2;
        printf("Median of array2 : %g\n", median2);
    }
    else
    {
        median2 = arr2[(size2/2)];
        printf("Median of array2 : %g\n", median2);
    }
    median3 = (float)(median1 + median2) / 2;
    printf("Median of both arrays : %g\n", median3);

    return 0;
}
