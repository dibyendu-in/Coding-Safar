#include<stdio.h>
#include<string.h>

int main()
{
	char str[10];
	scanf("%s", str);
        int i;
	for(i = 0; str[i] != '\0'; i++)
	{
	    printf("%c", str[strlen(str)-i-1]);
	}

	return 0;
}
