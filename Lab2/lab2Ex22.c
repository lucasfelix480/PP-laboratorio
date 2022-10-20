#include <stdio.h>
#include <stdlib.h>

int main()
{
	float j,m;
	
	printf(" Digite o comprimento em jardas : \n");
	scanf("%f",&j);
	
	m=0.91*j;
	
	printf("O seu comprimento em metros eh: %.2f" ,m);
	
	return 0;
}