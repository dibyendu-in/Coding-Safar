#include<stdio.h> //System header file
#include"library.h" //Local header file
#include"function_def.c"

int main()
{
    printf("%d + %d = %d\n", 5, 3, add(5, 3));
    printf("%d - %d = %d\n", 5, 3, sub(5, 3));

    return 0;
}
