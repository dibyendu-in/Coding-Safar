/*
Name:Dibyendu Barman
Date:08/Dec/2022
Description: A49. Write a program to implement fragments using Array of Pointers
Sample Input:
Enter no.of rows : 3
Enter no of columns in row[0] : 4
Enter no of columns in row[1] : 3
Enter no of columns in row[2] : 5
Enter 4 values for row[0] : 1 2 3 4
Enter 3 values for row[1] : 2 5 9
Enter 5 values for row[2] : 1 3 2 4 1

Sample Output:
Before sorting output is:

1.000000 2.000000 3.000000 4.000000 2.500000

2.000000 5.000000 9.000000 5.333333

1.000000 3.000000 2.000000 4.000000 1.000000 2.200000

After sorting output is:

1.000000 3.000000 2.000000 4.000000 1.000000 2.200000

1.000000 2.000000 3.000000 4.000000 2.500000

2.000000 5.000000 9.000000 5.333333
 */

#include <stdio.h>
#include <stdlib.h>

void sort(float **, int, int *); // function declaration

void average(float **arr, int row, int *col) // function definition
{

	printf("Before sorting output is:\n\n");

	for (int i = 0; i < row; i++)
	{
		double sum = 0; // variable declaration

		for (int j = 0; j < col[i]; j++)
		{
			printf("%f ", arr[i][j]); // before sorting output

			sum = sum + arr[i][j];

			if (j == (col[i] - 1))
			{
				arr[i][j + 1] = sum / col[i];
			}
		}

		printf("%f", sum / col[i]);

		printf("\n\n");
	}
	sort(arr, row, col); // function call to pass input to funtion
}

void sort(float **arr, int row, int *col) // function definition
{
	float *temp = 0; // variable declaration 
	int temp1 = 0; // variable declaration

	for (int i = 0; i < row; i++)
	{
		for (int j = i + 1; j < row; j++)
		{
			if (*(*(arr + i) + (*(col + i))) > *(*(arr + j) + (*(col + j))))
			{
				temp = *(arr + i); // swaping the base address of row
				*(arr + i) = *(arr + j);
				*(arr + j) = temp;

				temp1 = *(col + i); // swaping the column value as per changing the base address of row
				*(col + i) = *(col + j);
				*(col + j) = temp1;
			}
		}
	}
	printf("After sorting output is:\n\n");

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j <= col[i]; j++)
		{
			printf("%f ", arr[i][j]); // after sorting output
		}

		printf("\n\n");
	}
}
int main()
{
	int row; // variable declaration

	printf("Enter no. of rows: ");
	scanf("%d", &row);

	float *arr[row]; // array variable declaration
	int col[row]; // array variable declaration

	for (int i = 0; i < row; i++)
	{
		printf("Enter no of columns in row[%d] : ", i);
		scanf("%d", &col[i]); // //reading the no of columns 

		arr[i] = malloc((col[i] + 1) * sizeof(float)); //dynamic memory allocation
	}

	for (int i = 0; i < row; i++)
	{
		printf("Enter %d value for row[%d] : ", col[i], i);
		{
			for (int j = 0; j < col[i]; j++)
			{
				scanf("%f", &arr[i][j]); //reading the array input from user
			}
		}
	}
	printf("\n");

	average(arr, row, col); // function call to pass input to funtion

	return 0;
}
