#include<stdio.h>

int main(){

    float medP,p1,p2,p3;
    int peso1=1,peso2=2;

    printf("digite o valor das provas:\n");
    scanf("%f %f %f",&p1,&p2,&p3);

    medP = (((p1*peso1)+(p2*peso1)+(p3*peso2))/(peso1+peso1+peso2));

    if (p1>0 && p2>0 && p3>0)
    {
        if (medP>=60)
        {
           printf("Aluno aprovado!! a sua media eh : %f", medP);
        }
        else{
            printf("aluno reprovado!!a sua media eh : %f", medP);
        }
    }
    else{
        printf("Dados invalidos");
    }
    

    return 0;
}