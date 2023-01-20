#include<stdio.h>

float CelFah (float c){
    float F;
    F =  c * (9.0/5.0)+32;

    return F;
}

int main(){

    float temp , celcius;

    scanf("%f",&celcius);

    temp = CelFah(celcius);

    printf("%f", temp);

    return 0;
}
