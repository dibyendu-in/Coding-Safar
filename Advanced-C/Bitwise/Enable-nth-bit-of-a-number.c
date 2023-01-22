#include<stdio.h>

int main()
{
	int num, n;

	scanf("%d%d", &num,&n);

	num = num | 1 << n-1;
	
	printf("%d", num);
	
	return 0;
}
