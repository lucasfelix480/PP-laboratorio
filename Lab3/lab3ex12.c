#include<stdio.h>
#include<math.h>

int main(){

    int num, reslt;

    printf("digite um numero positivo :\n");
    scanf("%d", &num);

    if (num>0){

        reslt = log10(num);
        printf("o logaritimo do numero %d eh : %d",num, reslt);
    }
    else{
        printf("numero invalido");
    }

    return 0;
}