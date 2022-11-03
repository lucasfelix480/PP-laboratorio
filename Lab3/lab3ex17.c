#include<stdio.h>

int main(){

    float Bmaio, Bmenor, h, areaTrap;

    printf("Digite o valor da base maior do trapezio\n");
    scanf("%f",&Bmaio);
    printf("Digite o valor da base menor do trapezio\n");
    scanf("%f",&Bmenor);
    printf("Digite o valor da altura do trapezio\n");
    scanf("%f",&h);

    if ((Bmaio>0.0) && (Bmenor>0.0) && (h>0.0))
    {
        areaTrap = (((Bmaio + Bmenor)*h)/2);

        printf(" a area do trapezio eh:%f", areaTrap);
        
    }
    else{
        printf("Dados invalidos");
    }

    return 0;    
}
