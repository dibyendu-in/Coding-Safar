/*
Name:Dibyendu Barman
Date:14/Dec/2022
Description: A53. Write a program to define a macro swap (t, x, y) that swaps 2 arguments of type t
Sample Input:
./swap
1. Int
2. char
3. short
4. float
5. double
6. string
Enter you choice : 1

Enter the num1 : 10
Enter the num2 : 20
Sample Output:
After Swapping :
num1 : 20
num2 : 10
*/
#include <stdio.h>

// macro for swapping
#define swap(t, x, y) \
    {                 \
        t z = x;      \
        x = y;        \
        y = z;        \
    }
int main()
{
    // declaring the variables of all data type
    int choice;
    int x, y;
    char a, b;
    short c, d;
    float e, f;
    double g, h;
    char *str1, *str2;

    // printing the all data types
    printf("1. Int\n2. char\n3. short\n4. float\n5. double\n6. string\nEnter your choice : ");
    scanf("%d", &choice); // reding the choice from user

    switch (choice) // switch case
    {
    // case 1 to swap integer type
    case 1:
        printf("Enter the num1 : ");
        scanf("%d", &x); // reding the num1 from user
        printf("Enter the num2 : ");
        scanf("%d", &y); // reding the num2 from user

        swap(int, x, y);

        printf("After Swapping :\nnum1 : %d\nnum2 : %d\n", x, y);
        break;
        // case 2 to swap character type
    case 2:
        printf("Enter the char1 : ");
        getchar();
        scanf("%c", &a); // reding the char1 from user
        printf("Enter the char2 : ");
        getchar();
        scanf("%c", &b); // reding the char2 from user

        swap(char, a, b);

        printf("After Swapping :\nchar1 : %c\nchar2 : %c\n", a, b);
        break;
        // case 3 to swap short type
    case 3:
        printf("Enter the num1 : ");
        scanf("%hd", &c); // reding the num1 from user
        printf("Enter the num2: ");
        scanf("%hd", &d); // reding the num2 from user

        swap(short, c, d);

        printf("After Swapping :\nnum1 : %hd\nnum2 : %hd\n", c, d);
        break;
        // case 4 to swap float type
    case 4:
        printf("Enter the num1 : ");
        scanf("%f", &e); // reding the num1 from user
        printf("Enter the num2 : ");
        scanf("%f", &f); // reding the num2 from user

        swap(float, e, f);

        printf("After Swapping :\nnum1 : %g\nnum2 : %g\n", e, f);
        break;
    // case 5 to swap double type
    case 5:
        printf("Enter the num1 : ");
        scanf("%lf", &g); // reding the num1 from user
        printf("Enter the num2 : ");
        scanf("%lf", &h); // reding the num2 from user

        swap(double, g, h);

        printf("After Swapping :\nnum1 : %g\nnum2 : %g\n", g, h);
        break;
    // case 6 to swap string
    case 6:
        printf("Enter the string1 : ");
        scanf("%ms", &str1); // reding the str1 from user
        printf("Enter the string2 : ");
        scanf("%ms", &str2); // reding the str2 from user

        swap(char *, str1, str2);

        printf("After Swapping :\nstr1 : %s\nstr2 : %s\n", str1, str2);
        break;

    default:
        printf("Invalid Choice\n");
    }
    return 0;
}
