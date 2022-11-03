#include<stdio.h>

int main (){

    int P_trablab=2, P_avSem=3, P_examfnl=5;
    float trablab, avSem,examfnl,notaFinal;

    printf(" Digite  nota do trabalho de laboratorio:\n");
    scanf("%f", &trablab);
    printf(" Digite  nota da avaliaçao semestral:\n");
    scanf("%f", &avSem);
    printf(" Digite  nota do exame final:\n");
    scanf("%f", &examfnl);


    if((trablab>=0 && trablab<=10)&& (avSem>=0 && avSem<=10) && (examfnl>=0 && examfnl<=10)){

        notaFinal = ((trablab * P_trablab)+(avSem*P_avSem)+(examfnl*P_examfnl))/(P_avSem+P_examfnl+P_trablab);
        if(notaFinal>5){
            printf("Aluno aprovado!!");
        }
        else{
            if (notaFinal >3 && notaFinal <4.9)
            {
                printf("Aluno de recuperaçao");
            }
            else{
                printf("Aluno reprovado");
            }
        }
    }

    return 0;
}