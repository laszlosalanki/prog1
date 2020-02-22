#include <stdio.h>

int main()
{
	int a = 12;
	int b = 6;

	printf("Változók csere előtt: %d, %d\n",a,b);

	int c = a;
	a = b;
	b = c;

	printf("Változók csere után: %d, %d\n",a,b);

	return 0;
}
