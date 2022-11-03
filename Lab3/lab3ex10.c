#include<stdio.h>

int main(){
    char sexo;
    float h, hom,mulh;

    printf(" Qual o seu sexo? M ou H \n");
    scanf("%c", &sexo);
    printf("Digite a sua altura : \n");
    scanf("%f", &h);

    if (sexo == 'M'|| sexo == 'm')
    {
       mulh= (62.1*h)-44.7;
       printf("o seu peso ideal eh : %f",mulh);
    }
    else{
        if (sexo =='h'|| sexo == 'H')
        {
            hom=(72.7*h)-58.0;
            printf("O seu peso ideal eh: %f",hom);
        }
        else{
            printf("dados invalidos");
        }
    }

    return 0;
}