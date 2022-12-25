/*
Name:Dibyendu Barman
Date:25/Dec/2022
Description: 2D Array and Pointer
Sample Input:
Sample Output:
The value of arr = 0x7fffd5f25f10
The value of arr + 1 = 0x7fffd5f25f1c
The value of arr + 2 = 0x7fffd5f25f28
The value of &arr = 0x7fffd5f25f10
The value of &arr + 1 = 0x7fffd5f25f34
The value of *arr = 0x7fffd5f25f10
The value of *arr + 1 = 0x7fffd5f25f14
The value of *arr + 2 = 0x7fffd5f25f18
The value of **arr = 10
The value of *(*arr + 1) = 20
The value of *(*arr + 2) = 30
The value of *(*(arr + 2) + 2) = 80
*/

#include <stdio.h>

int main()
{
    int arr[3][3] = {10, 20, 30, 30, 40, 50, 60, 70, 80};   // 2D array

    printf("The value of arr = %p\n", arr);                 // First 1D array base address
    printf("The value of arr + 1 = %p\n", arr + 1);         // 2nd 1D array base address
    printf("The value of arr + 2 = %p\n", arr + 2);         // 3rd 1D array base address
    printf("The value of &arr = %p\n", &arr);               // First 2D array base address
    printf("The value of &arr + 1 = %p\n", &arr + 1);       // Next 2D array base address
    printf("The value of *arr = %p\n", *arr);               // *arr is first element address of 2D array
    printf("The value of *arr + 1 = %p\n", *arr + 1);       // *arr + 1 is the 2nd element address of 2D array
    printf("The value of *arr + 2 = %p\n", *arr + 2);       // *arr + 2 is the 3rd element address of 2D array
    printf("The value of **arr = %d\n", **arr);             // **arr is first element address value of 2D array
    printf("The value of *(*arr + 1) = %d\n", *(*arr + 1)); // *(*arr + 1) is the 2nd element address value of 2D array
    printf("The value of *(*arr + 2) = %d\n", *(*arr + 2)); // *(*arr + 2) is the 3rd element address value of 2D array

    printf("The value of *(*(arr + 2) + 2) = %d\n", *(*(arr + 2) + 2));
    // *(*(arr+2) + 2) is the 9th element address value of 2D array

    return 0;
}
