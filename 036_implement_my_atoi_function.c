/*
Name:Dibyendu Barman
Date:16/Nov/2022
Description: A36. Write a program to implement atoi function
Sample Input: Enter a numeric string: -12345

Sample Output: String to integer is -12345
*/

#include <stdio.h>

int my_atoi(char *); // function declaration

int main()
{
    char str[20]; int res; // variable declaration

    printf("Enter a numeric string : ");
    scanf("%s", str); //reading the input string

    res = my_atoi(str); // function call

    printf("String to integer is %d\n", res); // printing the output

    return 0;
}

int my_atoi(char *str) // function definition
{
    int i = 0, num = 0, mul = 0, sign = 1, ind = 0; // variable declaration

    if ((str[0] == '-')) // cheacking first charcter is '-'
    {
        ind = 1;   // true than ind is one
        sign = -1; // make sign as -1
    }
    if (str[0] == '*')
    {
        return 0;
    }

    if (str[0] == '-' || str[0] == '+') // if condition to check first charcter is '-' OR '+'
    {
        if ((str[1] == '+') || (str[1] == '-')) // if true than chech next charc....is '+'OR '-'
        {
            return 0;
        }
    }

    for (int i = ind; str[i] != '\0'; i++) // ruuning loop till null charcter
    {
        if ((str[i] >= 'A') && (str[i] <= 'z')) // if charc is alphabet then break the loop
            break;
        if ((str[i] >= '0') && (str[i] <= '9')) // if any number then control will go inside if loop
        {
            num = str[i] - 48;
            mul = mul * 10 + num;
        }
    }
    return (mul * sign); // after return mul multiply with sign
}
