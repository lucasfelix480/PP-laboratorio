#include<stdio.h>

int contadorDeHoras (int H, int M, int S){
    
    int soma;
    if ((H&&M&&S)>0){
        if (H<=24&&M<=60&&S<=60)
        {
            soma = (H*3600)+(M*60)+S;
        }
        
    }
    
    return soma;
}

int main(){

    int h,m, s, segund;

    scanf("%d\n%d\n%d",&h,&m,&s);
    
    segund=contadorDeHoras(h,m,s);

    printf("%d", segund);

    return 0;
}