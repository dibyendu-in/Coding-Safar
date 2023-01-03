#include"main.h"

void main()
{
    int num1, num2;
    printf("Enter two numbers :\n");
    scanf("%d %d", &num1, &num2);

    printf("Add = %d\n", add(num1, num2));
    printf("Sub = %d\n", sub(num1, num2));
    printf("Mul = %d\n", mul(num1, num2));

}