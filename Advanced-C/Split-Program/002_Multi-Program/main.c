#include<stdio.h>
#include"library.h"

int main()
{
    printf("%d + %d = %d\n", 5, 3, add(5, 3));
    printf("%d - %d = %d\n", 5, 3, sub(5, 3));

    return 0;
}
