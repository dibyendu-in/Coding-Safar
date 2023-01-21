#include<stdio.h>

int length(char str[])
{
	int count = 0, i;

	for(i = 0; str[i] != '\0'; i++)
		count += 1;
	
	return count;
}

int main()
{
	char str[10];
	scanf("%s", str);

	int len = length(str);
	int lastIndex = len-1;

	for(int i = 0; i < len/2; i++)
	{
		char temp = str[i];
		str[i] = str[lastIndex-i];
		str[lastIndex-i] = temp;
	}

	printf("%s", str);
	return 0;
}
