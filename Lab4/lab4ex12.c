#include <stdio.h>

int main ()
{
    int num ,i;
    int div = 0;

    printf("Digite um numeor inteiro : \n");
    scanf("%d",&num);

    for ( i = 1; i < num; i++)
    {
        if ( num%i==0){

            div = div+i;
        }

        
    }
    printf("%d",div);

    return 0;







}