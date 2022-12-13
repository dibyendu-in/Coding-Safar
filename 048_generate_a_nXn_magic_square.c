/*
Name:Dibyendu Barman
Date:05/Dec/2022
Description: A48. Write a program to generate a n*n magic square
Sample Input: Enter a number: 3
Sample Output:
8 1 6
3 5 7
4 9 2
 */

#include <stdio.h>
#include <stdlib.h>

void magic_square(int **ptr, int num) // function definition
{

    int row, column, position; // variable declaration

    row = 0;
    column = num / 2;
    position = 1;
    
    /*position of elements movement for one upward and one right movement(or) downward movement*/
    
    while (position <= num * num) // movement of the element position
    {
        ptr[row][column] = position++; //assign and increment to the position

        //printf("[%d][%d] = %d\n",row, column, ptr[row][column]);

        int new_row = row, new_column = column;

        if (new_row - 1 < 0)
            new_row = num - 1;
        else
            --new_row;

        if (new_column + 1 == num)
            new_column = 0;
        else
            ++new_column;

        if (ptr[new_row][new_column] == 0)
        {
            row = new_row;
            column = new_column;
        }
        else
        {
            if (++row == num)
                row = 0;
        }
    }

    int square_size = num * num, specifier = 0;

    while (square_size)
    {
	specifier++; //increment the specifier as per the square size 

        square_size = square_size / 10;
    }

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            printf("%*d ", specifier, ptr[i][j]); //printing the elements of the square
        }
        printf("\n");
    }
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num); //reading the integer input from user

    if (num < 0 || num % 2 == 0)
    {
        printf("Error : Please enter only positive odd numbers\n"); //printing the error message
        return 0;
    }

    int **ptr = (int **)calloc(num, sizeof(int *)); //dynamic memory allocation

    for (int i = 0; i < num; i++)
    {
        ptr[i] = (int *)calloc(num, sizeof(int)); //dynamic memory allocation
    }

    magic_square(ptr, num); // function call to pass input to funtion

    return 0;
}
