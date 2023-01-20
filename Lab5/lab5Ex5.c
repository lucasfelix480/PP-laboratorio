#include<stdio.h>

float VolumEsfera(float raio){

    float V;

    V= (4*3.14*pow(raio,3))/3;

    return V;

};

int main(){
    
    float r, Vol;

    scanf("%f",&r);

    Vol=VolumEsfera(r);

    printf("%.2f cm3", Vol);

    return 0;


}