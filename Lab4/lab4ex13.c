#include<stdio.h>

int main ()
{
    int num =1000;
    int i;
    int soma=0;

    for ( i = 1; i < 1000; i++)
    {
        if(i%3==0 || i%5==0){
            soma= soma +i;
        }
    }
    printf("%d",soma);

    return 0;
}
