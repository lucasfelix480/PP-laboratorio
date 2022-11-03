#include<stdio.h>

int main(){

    float X, Y;
    printf("Digite dois numeros :\n");
    scanf("%f",&X);
    scanf("%f",&Y);

    if (X>Y){
        printf("o maior numero eh %.2f:\n", X);
    }
    else{
        printf( "o maior numero eh : %.2f",Y);

    }
    printf("Fim do progamna!");

    return 0;
}
