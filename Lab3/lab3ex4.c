#include<stdio.h>
#include<math.h>

int main(){

    float x,y,z;

    printf("digite um numero positivo: \n");
    scanf("%f",&x);

    if(x>0){
        y=sqrt(x);
        z=pow(x,2);
        printf(" A raiz quadrada eh %.2f e o quadraro no numero e %.2f",y,z);
    
    }

    else{
        printf("Numero invalido ");
    }

    printf("fim do programa!");

    return 0;
}