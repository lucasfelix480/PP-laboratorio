#include<stdio.h>

int main (){

    int num, soma=0;

    printf( "digite o seu numero:\n");
    scanf("%d",&num);

    while( num > 0){

        soma = soma+(num%10);
        num= num/10;
    }

    printf("%d",soma);
    return 0;
}