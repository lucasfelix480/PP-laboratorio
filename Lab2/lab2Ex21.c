#include <stdio.h>
#include <stdlib.h>

int main()
{
	float K,L;
	
	printf(" Digite a sua massa em Libras : \n");
	scanf("%f",&L);
	
	K= L*0.45;
	
	printf("A sua massa convertido em kg eh: %.2f" ,K);
	
	return 0;
}