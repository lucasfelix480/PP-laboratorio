#include <stdio.h>
#include <stdlib.h>

int main()
{
	float M,L;
	
	printf(" Digite o seu volume em L: \n");
	scanf("%f",&L);
	
	M= L/1000;

	printf("o seu volume convertido em m3 eh: %.2f" ,M);
	
	return 0;
}
