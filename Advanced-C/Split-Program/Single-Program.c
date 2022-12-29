#include<stdio.h>

/* Function Declaration */
int add(int x, int y);
int sub(int x, int y);

int main()
{
    printf("%d + %d = %d\n", 5, 3, add(5, 3));
    printf("%d - %d = %d\n", 5, 3, sub(5, 3));

    return 0;
}

/* Function Definition */
int add(int x, int y)
{
    return x + y;
}

/* Function Definition */
int sub(int x, int y)
{
    return x - y;
}
