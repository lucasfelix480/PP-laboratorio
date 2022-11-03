#include<stdio.h>
#include<math.h>

int main(){

    float x,y;

    printf("qual numero deseja obter raiz quadrada: \n");
    scanf("%f",&x);

    if(x>0){
        y=sqrt(x);
        printf(" A raiz quadrada eh %.2f",y);
    
    }

    else{
        printf("Numero invalido ");
    }

    printf("fim do programa!");

    return 0;
}