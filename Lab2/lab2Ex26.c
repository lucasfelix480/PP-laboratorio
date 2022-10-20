#include <stdio.h>
#include <stdlib.h>

int main()
{
	float h,m2;
	
	printf(" Digite o valor em metros quadrados para conversao  : \n");
	scanf("%f",&m2);
	
    h=m2*0.0001;
	
	printf("A sua area convertida em hacteres eh: %.2f" ,h);
	
	return 0;
}