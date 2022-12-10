/*
Name:Dibyendu Barman
Date:04/Nov/2022
Description: A28. Write a program to remove duplicate elements in a given array
Sample Input:
Enter the size: 5
Enter elements into the array: 5 1 3 1 5

Sample Output:
After removing duplicates: 5 1 3
 */
#include<stdio.h>

void remove_duplicates(int *arr1, int size, int *arr2, int *new_size);                    //function declaration

int main()
{
    int size, i, newsize = 0;     //declare and initilize variables

    printf("Enter the size: ");     //read the input from user
    scanf("%d", &size);
    int arr1[size], arr2[size];   //initilize the two arrays

    printf("Enter elements into the array: ");   //read the array elements from user using loop
    for(i = 0; i < size; i++)
    {
	scanf("%d", &arr1[i]);
    }

    remove_duplicates(arr1, size, arr2, &newsize);  //call the function

    printf("After removing duplicates: "); //print the array elements after removing the duplicate elements
    for(i = 0; i < newsize; i++)
    {
	printf("%d ", arr2[i]);
    }
    printf("\n");
    return 0;
}

void remove_duplicates(int *arr1, int size, int *arr2, int *new_size) //function definition
{
    int i, j, k;     //declaration of  variables 

    for(i = 0; i < size; i++)    //access the array elements with respect to i value
    {
	for(j = i + 1; j < size; j++)   //access the array elements with respect to j value
	{
	    if(arr1[i] == arr1[j])   //compare the array elements if equal
	    {
		for (k = j; k < size - 1; k++)  //replace present element with next element of array
		{
		    arr1[k] = arr1 [k + 1];
		}
		size--;                                             //decrement the size
		j--;                                                  //decrement the j value
	    }
	}
	*new_size = size;   //assign the new_size value with new size value
	arr2[i] = arr1[i];   //copy arr1 elements to arr2
    }
}
