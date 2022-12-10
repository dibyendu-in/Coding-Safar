/*
Name:Dibyendu Barman
Date:10/Nov/2022
Description: A32. Write a program to print the values in sorted order without modifying or copying array
Sample Input:
Enter the size : 7
Enter 7 elements 
1 3 2 5 4 7 6

Sample Output:
After sorting: 1 2 3 4 5 6 7
Original array values 1 3 2 5 4 7 6
 */

#include<stdio.h>

void print_sort(int *arr, int size);   //function declaration

int main()
{
    int size, i;         //declaration of variables
    printf("Enter the size: ");   //read the input from user
    scanf("%d", &size);

    int arr[size];   

    printf("Enter %d elements\n", size);
    for(i = 0; i < size; i++)   //array elements are input from user
    {
	scanf("%d", &arr[i]);
    }

    print_sort(arr, size);  //call the function

    printf("Original array values ");  //print the original array  elements
    for(i = 0; i < size; i++)
    {
	printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

void print_sort(int *arr, int size)
{
    int i, min = arr[0], max = arr[0], sort = 0;      //declaration and initilization of variables

    for(i = 0; i < size; i++)                               
    {
	if(arr[i] < min)   //find minimum element of array
	    min = arr[i];

	if(arr[i] > max)      //find maximum element of array
	    max = arr[i];
    }

    printf("After sorting: ");
    printf("%d ", min);    //print the minimum element

    while(min != max)     //check minimum value is not equal max value
    {
	for(i = 0; i < size; i++)
	{
	    if(arr[i] != min && arr[i] > min)     //checking condition
	    {
		sort = arr[i]; 
		break;
	    }
	}

	for(i = 0; i < size;i++)
	{
	    if(arr[i] < sort && arr[i] > min)    //find which is lowest out of array
		sort = arr[i];
	}
	printf("%d ", sort);
	min = sort;                               //update min element with new element
    }
    printf("\n");
}
