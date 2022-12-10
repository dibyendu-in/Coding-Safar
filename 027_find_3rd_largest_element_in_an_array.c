/*
Name:Dibyendu Barman
Date:06/Nov/2022
Description: Write a program to find 3rd largest element in an array
Sample Input:
Enter the size of the Array : 5
Enter the elements into the array: 5 1 4 2 8

Sample Output:
Third largest element of the array is 4
 */

#include<stdio.h>

int third_largest(int *arr, int size) // called function
{
    int i, first_max = 0, sec_max = 0, third_max = 0;

    first_max = *arr;

    for(i = 0; i < size; i++) // checking first largest element
    {
	if(*(arr + i) > first_max)
	    first_max = *(arr + i);
    }

    //printf("%d\n", first_max);

    if(first_max == *arr)
	sec_max = *(arr + 1);
    else
	sec_max = *arr;

    for(i = 0; i < size; i++) // checking second largest element
    {
	if((*(arr + i) > sec_max) &&  (*(arr + i) < first_max))
	    sec_max = *(arr + i);
    }

    //printf("%d\n", sec_max);

    if(sec_max == *(arr + 1))
	third_max = *(arr + 2);
    else
	third_max = *(arr + 1);

    for(i = 0; i < size; i++) // checking third largest element
    {
	if((*(arr + i) > third_max) && (*(arr + i) < sec_max) &&  (*(arr + i) < first_max))
	    third_max = *(arr + i);
    }

    //printf("%d\n", third_max);

    return third_max; // returning 3rd largest elements to the main function
}

int main()
{
    int size;

    printf("Enter the size of the Array : ");
    scanf("%d", &size); //reading the size of the array

    int arr[size];
    int i, ret = 0;

    printf("Enter the elements into the array: ");
    for(i = 0; i < size; i++) // reading the array elements
    {
	scanf("%d", (arr + i));
    }

    ret = third_largest(arr, size); //calling function

    printf("Third largest element of the array is %d\n", ret);

    return 0;
}
