#include<stdio.h>

int main()
{
	char str[10], copy_str[10];
	scanf("%s", str);
        int i = 0;
	while(str[i] != '\0')
	{
	   copy_str[i] = str[i];
	   i++;
	}
	
	printf("Copied string = %s",copy_str);
	return 0;
}
