#include <stdio.h>
#include <stdlib.h>

int main()
{
	float M,L;
	
	printf(" Digite o seu volume em m3: \n");
	scanf("%f",&M);
	
	L= 1000*M;
	
	printf("o seu volume convertido em litros eh: %.2f" ,L);
	
	return 0;
}
