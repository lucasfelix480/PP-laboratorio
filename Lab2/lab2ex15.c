#include <stdio.h>
#include <stdlib.h>

int main()
{
	float R,G;
	float P = 3.141592;
    printf("apresente o seu radianos:  ");
	scanf("%f",&R);
	
	G=R*180/P;
	
	printf(" sua conversao em graus eh: %f", G);
	
	return 0;
	
}
