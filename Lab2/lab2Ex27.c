#include <stdio.h>
#include <stdlib.h>

int main()
{
	float h,m2;
	
	printf(" Digite o valor em hacteres para conversao  : \n");
	scanf("%f",h);
	
    m2=h*10000;
	
	printf("A sua area convertida em M2 eh: %.2f" ,m2);
	
	return 0;
}