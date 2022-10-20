#include <stdio.h>
#include <stdlib.h>

int main()
{
	float K,L;
	
	printf(" Digite a sua massa em kg : \n");
	scanf("%f",&K);
	
	L= K/0.45;
	
	printf("A sua massa convertido em libras eh: %.2f" ,L);
	
	return 0;
}
