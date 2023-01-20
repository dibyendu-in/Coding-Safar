#include<stdio.h>

int main()
{
	char str[10]; int i = 0, count = 0;
	scanf("%s", str);

	while(str[i] != '\0')
	{
	    if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
	    count++;
	    i++;
	}
	printf("%d\n", count);
	
	return 0;
}
