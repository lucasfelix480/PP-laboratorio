#include<stdio.h>
#include<math.h>

int main(){

    int x;

    printf("Digite um numero: \n");
    scanf("%d",&x);

    if(x>0){

        
        if (x%2==0)
        {
            printf( "numero par \n");
        }
        else{
            printf("numero impar \n");
        }
    
    }

    else{
        printf("Numero invalido ");
    }

    printf("fim do programa!");

    return 0;
}