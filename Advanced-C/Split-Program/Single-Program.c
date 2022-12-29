#include<stdio.h>

int add(int x, int y);
int sub(int x, int y);

int main()
{
    printf("%d + %d = %d\n", 5, 3, add(5, 3));
    printf("%d - %d = %d\n", 5, 3, sub(5, 3));

    return 0;
}

int add(int x, int y)
{
    return x + y;
}

int sub(int x, int y)
{
    return x - y;
}
