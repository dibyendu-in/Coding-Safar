/*
Name:Dibyendu Barman
Date:15/Nov/2022
Description: A33. Write a program to count no. of characters, words and lines, entered through stdin
Sample Input:
Hello world
Dennis Ritchie
Linux

Sample Output:
Character count : 33
Line count : 3
Word count : 5

 */

#include<stdio.h>

int main()
{
    char ch, p_char = ' '; //initialization and declaration of variables

    int my_char = 0, line = 0, word = 0;

    while((ch = getchar()) != EOF) //reading input from std input
    {
        my_char++; // character count

        if(ch == '\n')
        {
            line++; // line count
        }

        if ((p_char != ' ' &&  p_char != '\n' && p_char != '\t') && (ch == ' ' || ch == '\n' || ch == '\t')) // checking the condition
        {
            word++; // word count
        }

        p_char = ch;
    }

    printf("Character count : %d\n", my_char); // printing the character count output

    printf("Line count : %d\n", line);  // printing the line count output

    printf("Word count : %d\n", word);  // printing the word count output

    return 0;
}
