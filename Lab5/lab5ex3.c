#include<stdio.h>

float verifica_num(float num){
    if (num>0)
    {
       return 1;
    }
   if (num == 0)
    {
        return 0;
    }
    if(num<0){
        return -1;
    }
}

int main(){

    float n,b,dado;
    scanf("%f",&n);
    scanf("%f",&b);
   dado = verifica_num(n);

    printf("%f", dado);

    dado= verifica_num(b);
    printf("%f", dado);

    return 0;

}