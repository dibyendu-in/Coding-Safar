#include<stdio.h>

int main()
{
	char str[10]; int i = 0;
	scanf("%s", str);

	while(str[i] != '\0')
	{
	    i++;
	}
	printf("%d\n", i);
	
	return 0;
}
