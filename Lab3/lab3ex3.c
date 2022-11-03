#include<stdio.h>
#include<math.h>

int main(){

    float x,y;

    printf("digite numeros positivos para raiz quadrada ou negativos para o quadrado \n");
    scanf("%f",&x);

    if(x>0){
        y=sqrt(x);
        printf(" A raiz quadrada eh %.2f",y);
    
    }

    else{
        y=pow(x,2);
        printf("o numero ao quadrado eh %.2f", y);
    }

    printf("fim do programa!");

    return 0;
}