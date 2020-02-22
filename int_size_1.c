#include <stdio.h>

int main(){
	
	int szam = 1;
	int bit = 1;
	while(szam <<= 1)
		bit++;
	printf("%d%s\n",bit, " bit");
	return 0;
}
