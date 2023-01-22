#include<stdio.h>

int main()
{
	int num, n, check_bit;

	scanf("%d%d", &num, &n);

	check_bit = num & (1 << n-1);
	
	if(check_bit == 0)
	printf("%d", num | (1 << n-1));
	else
	printf("%d", num & (~(1 << n-1)));
	

	return 0;
}
