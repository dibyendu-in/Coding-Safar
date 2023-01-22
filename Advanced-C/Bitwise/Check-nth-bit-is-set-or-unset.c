#include<stdio.h>

int main()
{
	int num, n, set;

	scanf("%d%d", &num, &n);

	set = num & 1 << n-1;
	
	if(set == 0)
	printf("OFF");
	else
	printf("ON");
	
	return 0;
}
