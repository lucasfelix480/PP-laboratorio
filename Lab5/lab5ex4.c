#include <stdio.h>
#include<math.h>

int quadradoPerfeito(int n)
{
    int a;
    float b;


    if (n>0)
    {
        b=sqrt(n);
        a=b;
        
        if(a*a==n){
            return printf("Quadrado perfeito");
        }
        else{
            return printf("nao eh um quadrado perfeito");
        }
    }
    else{
        return printf("o numemeo nao eh valido");
    }
    
    return 0;
}

int main(){

    int numero;

    scanf("%d",&numero);

    quadradoPerfeito(numero);

    return 0;
}
