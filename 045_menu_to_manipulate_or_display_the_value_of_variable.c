/*
Name:Dibyendu Barman
Date:13/Dec/2022
Description: A45. Write a program to Provide a menu to manipulate or display the value of variable of type t
Sample Input:
Menu :
1. Add element
2. Remove element
3. Display element
4. Exit from the program

Choice ---> 1
Enter the type you have to insert:
1. int
2. char
3. float
4. double
Choice ---> 2
Enter the char : k
1. Add element
2. Remove element
3. Display element
4. Exit from the program
Choice ---> 3
-------------------------
0 -> k
-------------------------
1. Add element
2. Remove element
3. Display element
4. Exit from the program
Choice ---> 1
Enter the type you have to insert:
1. int
2. char
3. float
4. double
Choice ---> 1
Enter the int : 10
1. Add element
2. Remove element
3. Display element
4. Exit from the program
Choice ---> 3
------------------------
0 -> k (char)
1 -> 10 (int)
------------------------
1. Add element
2. Remove element
3. Display element
4. Exit from the program

Choice ---> 2
0 -> k
1 -> 10
Enter the index value to be deleted : 0
index 0 successfully deleted.
1. Add element
2. Remove element
3. Display element
4. Exit from the program
Choice ---> 4

Sample Output:
 */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int choice, option, index; // declaration of int type variable
    int pos[5]; // declaration of int array variable

    int c_flag = 0, s_flag = 0, i_flag = 0, f_flag = 0, d_flag = 0;
    // declaration & initialization of int type variable
    void *ptr; // void pointer
    // allocating 8 consecutive bytes in memory
    ptr = malloc(8 * sizeof(char));
    // selecting the option
    printf("Menu:\n");
    while (1)
    {
        printf("1. Add element\n2. Remove element\n3. Display element\n4. Exit from the program\nChoice ---> ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            printf("Enter the type you have to insert:\n1.int\n2.char\n3.short\n4.float\n5.double\nChoice ---> ");
            scanf("%d", &option);
            switch (option)
            {
            case 1:
                if (i_flag == 0 && f_flag == 0 && d_flag == 0)
                {
                    i_flag++;
                    printf("Enter the int : "); // read the integer value from user
                    scanf("%d", ((int *)ptr) + 1);
                }
                else
                    printf("Memory is occupied\n");
                break;
            case 2:
                if (c_flag < 2 && d_flag == 0)
                {
                    printf("Enter the char : "); // read the character from user
                    scanf(" %c", ((char *)ptr) + c_flag);
                    c_flag++;
                }
                else
                    printf("Memory is occupied\n");
                break;
            case 3:
                if (s_flag == 0 && d_flag == 0)
                {
                    s_flag++;
                    printf("Enter the short : ");
                    scanf("%hd", ((short *)ptr) + 1); // read the short number from user
                }
                else
                    printf("Memory is occupied\n");
                break;
            case 4:
                if (i_flag == 0 && f_flag == 0 && d_flag == 0)
                {
                    f_flag++;
                    printf("Enter the float : ");
                    scanf("%f", ((float *)ptr) + 1); // read the float number from user
                }
                else
                    printf("Memory is occupied\n");
                break;
            case 5:
                if (c_flag == 0 && i_flag == 0 && s_flag == 0 && f_flag == 0 && d_flag == 0)
                {
                    d_flag++;
                    printf("Enter the double : ");
                    scanf("%lf", ((double *)ptr)); // read the double value from user
                }
                else
                    printf("Memory is occupied\n");
                break;
            default:
                printf("Invalid option\n");
            }
            break;
        }
        case 2: // remove element
        {
            printf("------------------------\n");
            index = 0;
            // printing with the position of the 8 consecutive memory
            if (c_flag > 0)
            {
                printf("%d -> %c\n", index, *((char *)ptr)); // 1st char
                pos[index++] = 1;
                if (c_flag > 1)
                {
                    printf("%d -> %c\n", index, *(((char *)ptr) + 1)); // 2nd char
                    pos[index++] = 1;
                }
            }
            if (s_flag == 1)
            {
                printf("%d -> %hd\n", index, *(((short *)ptr) + 1)); // 3rd and 4th for short
                pos[index++] = 2;
            }
            if (i_flag == 1)
            {
                printf("%d -> %d\n", index, *(((int *)ptr) + 1)); // 5th to 8th for int
                pos[index++] = 3;
            }
            if (f_flag == 1)
            {
                printf("%d -> %f\n", index, *(((float *)ptr) + 1)); // 5th to 8th for float
                pos[index++] = 4;
            }
            if (d_flag == 1)
            {
                printf("%d -> %lf\n", index, *((double *)ptr)); // full memory for double
                pos[index++] = 5;
            }
            printf("------------------------\n");
            printf("Enter the index value to be deleted : ");
            scanf("%d", &index);

            switch (pos[index])
            {
            case 1: // removing char
                if (c_flag > 0)
                {
                    if (index == 0)
                    {
                        *((char *)ptr) = *(((char *)ptr) + 1);
                        c_flag--;
                    }
                    if (index == 1)
                    {
                        c_flag--;
                    }
                    printf("Index %d is successfully deleted.\n", index);
                }
                else
                    printf("Already deleted\n");
                break;
            case 2: // removing short
                if (s_flag == 1)
                {
                    s_flag--;
                    printf("Index %d is successfully deleted.\n", index);
                }
                else
                    printf("Already deleted\n");
                break;
            case 3: // removing int
                if (i_flag == 1)
                {
                    i_flag--;
                    printf("Index %d is successfully deleted.\n", index);
                }
                else
                    printf("Already deleted\n");
                break;
            case 4: // removing float
                if (f_flag == 1)
                {
                    f_flag--;
                    printf("Index %d is successfully deleted.\n", index);
                }
                else
                    printf("Already deleted\n");
                break;
            case 5: // removing double
                if (d_flag == 1)
                {
                    d_flag--;
                    printf("Index %d is successfully deleted.\n", index);
                }
                else
                    printf("Already deleted\n");
                break;
            default:
                printf("Invalid option\n");
            }
            break;
        }
        case 3: // displaying element
        {
            printf("------------------------\n");
            index = 0;
            
            if (c_flag > 0)
            {
                printf("%d -> %c\t(char)\n", index++, *((char *)ptr));

                if (c_flag > 1)
                    printf("%d -> %c\t(char)\n", index++, *(((char *)ptr) + 1));
            }
            if (s_flag == 1)
                printf("%d -> %hd\t(short)\n", index++, *(((short *)ptr) + 1));

            if (i_flag == 1)
                printf("%d -> %d\t(int)\n", index++, *(((int *)ptr) + 1));

            if (f_flag == 1)
                printf("%d -> %f\t(float)\n", index++, *(((float *)ptr) + 1));

            if (d_flag == 1)
                printf("%d -> %lf\t(double)\n", index++, *((double *)ptr));

            if (c_flag == 0 && i_flag == 0 && s_flag == 0 && f_flag == 0 && d_flag == 0)
                printf("Nothing available all indexes are empty\n");

                printf("------------------------\n");
            break;
        }
        case 4: // exit from the program
            free(ptr);
            ptr = NULL;
            exit(1);
            break;
        default:
            printf("Invalid option\n");
        }
    }
}
