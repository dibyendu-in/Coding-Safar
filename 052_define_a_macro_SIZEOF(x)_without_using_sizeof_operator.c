/*
Name:Dibyendu Barman
Date:14/Dec/2022
Description: A52. Write a program to define a macro SIZEOF(x), without using sizeof operator
Sample Input: ./sizeof
Sample Output:
Size of int : 4 bytes
Size of char : 1 byte
Size of float : 4 bytes
Size of double : 8 bytes
Size of unsigned int : 4 bytes
Size of long int : 8 bytes
*/
#include <stdio.h>

// macro definition to find sizeof(data_types)
#define SIZEOF(x) (char *)(x + 1) - (char *)x

int main()
{
    // pointer variable declaration for different datatype
    int *i;
    char *c;
    float *f;
    double *d;
    unsigned int *ui;
    long int *li;
    short int *si;
    long double *ld;
    unsigned char *uc;
    long long int *lli;

    // printing sizeof integer datatype
    printf("Size of int : %ld bytes\n", SIZEOF(i));

    // printing sizeof char datatype
    printf("Size of char : %ld bytes\n", SIZEOF(c));

    // printing sizeof float datatype
    printf("Size of float : %ld bytes\n", SIZEOF(f));

    // printing sizeof double datatype
    printf("Size of double : %ld bytes\n", SIZEOF(d));

    // printing sizeof unsigned int datatype
    printf("Size of unsigned int : %ld bytes\n", SIZEOF(ui));

    // printing sizeof long int datatype
    printf("Size of long int : %ld bytes\n", SIZEOF(li));

    // printing sizeof short int datatype
    printf("Size of short int : %ld bytes\n", SIZEOF(si));

    // printing sizeof long double datatype
    printf("Size of long double : %ld bytes\n", SIZEOF(ld));

    // printing sizeof unsigned char datatype
    printf("Size of unsigned char : %ld bytes\n", SIZEOF(uc));

    // printing sizeof long long int datatype
    printf("Size of long long int : %ld bytes\n", SIZEOF(lli));

    return 0;
}
