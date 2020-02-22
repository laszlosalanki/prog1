#include <stdio.h>

int main()
{
	int a = 15;
	int b = 20;

	printf("Változók csere előtt: %d, %d\n",a,b);

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	printf("Változók csere után: %d, %d\n",a,b);

	return 0;
}
