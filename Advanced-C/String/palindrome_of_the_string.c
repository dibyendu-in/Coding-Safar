#include<stdio.h>

int strlength(char *str)
{
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++)
    count++;
    return count;
}

int main()
{
	char str[10];
	scanf("%s", str);
    int i, flag = 0, len;
    
    len = strlength(str);
    
	for(i = 0; i < len/2; i++)
	{
	   if(str[i] != str[len-i-1])
	    flag = 1;
	    break;
	}
	if(flag == 0)
	printf("Palindrome\n");
	else
	printf("Not Palindrome\n");

	return 0;
}
