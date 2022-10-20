#include<stdio.h>

int main(){
    int num_lido, num1,num2,num3;

    printf("Digite o numero com tres algarismos:");
    scanf("%d", &num_lido);

    num1 = num_lido % 10;
    num2 = (num_lido/10)%10;
    num3 = (num_lido/100);
    printf("%d%d%d",num1,num2,num3);

    return 0;
}