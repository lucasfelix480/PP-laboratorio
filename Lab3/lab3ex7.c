#include<stdio.h>

int main(){
    
    int num1,num2;

    printf("Digite dois numeros:\n");
    scanf("%d",&num1);
    scanf("%d",&num2);

    if (num1>num2)
    {
        printf("o maior numero eh : %d\n", num1);
    }
    else {
        if(num2>num1){
            printf("o maior numeor eh:%d \n", num2);
        }
        else { 
            if (num1=num2){
            printf("Numeros iguais\n");
        }
        }
    }   

    printf("Fim do Programa!");

    return 0;
}