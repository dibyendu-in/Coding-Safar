/*
Name:Dibyendu Barman
Date:19/Oct/2022
Description: A9. Write a program to find which day of the year
Sample Input:
Enter the value of 'n': 9
Choose First Day :
1.Sunday
2.Monday
3.Tuesday
4.Wednesday
5.Thursday
6.Friday
7.Saturday
Enter the option to set the first day : 2
Sample Output:
The day is Tuesday
 */

#include<stdio.h>

int main()
{
    int n, day, rem, extra; // variable declaration

    printf("Enter the value of 'n': ");
    scanf("%d", &n); //reading user input

    if(n > 0 && n <= 365) // checking condition
    {

    printf("Choose First Day :\n1.Sunday\n2.Monday\n3.Tuesday\n4.Wednesday\n5.Thursday\n6.Friday\n7.Saturday\n");
    printf("Enter the option to set the first day: ");
    scanf("%d", &day); // raeding user input

    if(day > 0 && day <= 7) // checking condition
    {

    rem=(7 - day) + 1;
    extra = n - rem;
    
    if(extra < 0)  // checking condition for negative value
        extra = (n + day) - 1;

    if(extra == 0) // checking condition
        extra = 7;

    if(extra > 7) // checking condition
       extra = extra % 7;

    switch(extra)
    {
        case 1:
            printf("The day is Sunday\n");
            break;
        case 2:
            printf("The day is Monday\n");
            break;
        case 3:
            printf("The day is Tuesday\n");
            break;
        case 4:
            printf("The day is Wednesday\n");
            break;
        case 5:
            printf("The day is Thursday\n");
            break;
        case 6:
            printf("The day is Friday\n");
            break;
        case 7:
            printf("The day is Saturday\n");
            break;
    }
    }
    else
        printf("Error: Invalid input, first day should be > 0 and <= 7\n");
    }
    else
       printf("Error: Invalid Input, n value should be > 0 and <= 365\n");


    return 0;
}
