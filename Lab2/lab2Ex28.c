#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
	int a,b,c,soma;

    printf("digite tres valores:\n");
    scanf("%d %d %d", &a,&b,&c);

    soma=(pow(a,2))+(pow(b,2))+(pow(c,2));

    printf("A soma eh:%d", soma);

    return 0;

}