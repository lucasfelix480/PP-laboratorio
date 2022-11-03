#include<stdio.h>

int main(){

    float a,b,som, sub, mult, div;
    int digito;

    do
    {
        printf(" \n Calculadora escola qual opeaçao deseja realizar \n");
        printf(" Dgite '1' para adicao \n Dgite '2' para subitracao \n Dgite '3' para multiplicaçao  \n Dgite '4' para divisao \n ");
        printf ("digite '5 para sair \n");
        scanf("%d",&digito);
        printf("Digite dois valores");
        scanf("%f %f",&a,&b);

        switch (digito)
        {
        case (1):
        som = a + b;
        printf(" o valor da soma eh: %.2f",som);
        break;
        case (2):
        sub = a - b;
        printf(" o valor da subtracao eh: %.2f",sub);
        break;
        case (3):
        mult = a*b;
        printf(" o valor da multiplicçao eh: %.2f",mult);
        break;
        case (4):
        div = a /b;
        printf(" o valor da divisao eh: %.2f",div);
        default:
        printf("programa finalizado");
        break;
    }

    } while (digito > 0 && digito <5);
    
    
    return 0;
}