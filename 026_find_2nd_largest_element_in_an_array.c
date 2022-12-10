/*
Name:Dibyendu Barman
Date:03/Nov/2022
Description: A26. Write a program to find 2nd largest element in an array
Sample Input:
Enter the size of the Array : 5
Enter the elements into the array: 5 1 4 2 8

Sample Output:
Second largest element of the array is 5
 */
#include<stdio.h>

int sec_largest(int *arr, int size) // called function
{
    int i, first_max = 0, sec_max = 0;

    first_max = *arr;

    for(i = 0; i < size; i++) // checking first largest element
    {
	if(*(arr + i) > first_max)
	    first_max = *(arr + i);
    }
    if(first_max == *arr)
	sec_max = *(arr + 1);
    else
	sec_max = *arr;

    for(i = 0; i < size; i++) // checking second largest element
    {
	if((*(arr + i) > sec_max) &&  (*(arr + i) < first_max))
	    sec_max = *(arr + i);
    }

    return sec_max; // returning 2nd largest elements to the main function
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

    ret = sec_largest(arr, size); //calling function

    printf("Second largest element of the array is %d\n", ret);

    return 0;
}
