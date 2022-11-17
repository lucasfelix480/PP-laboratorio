#include<stdio.h>

int main(){
    int i;
    float num, num_maior =0, num_menor=1;


    printf("Digite com  10 numeoros\n");
    for ( i = 1; i <=10; i++)
    {   
        printf("entre com o %d ",i);
        scanf("%f",&num);

        if(num> num_maior){
        num_maior = num;
        }
        else{
            if(num<num_menor){
                num_menor=num;
            }
        }
    }

    printf("o maior numero eh : %f", num_maior);
    printf("o menor  numero eh : %f", num_menor);

    return 0;
}

