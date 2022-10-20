#include <stdio.h>
#include <stdlib.h>

int main()
{
	float G,R;
	float P = 3.1415;
    printf("apresente o seu angulo:  ");
	scanf("%f",&G);
	
	R=G*P/180;
	
	printf(" sua conversao em radianos eh: %f", R);
	
	return 0;
}
