#include <stdio.h>
#include <stdlib.h>
#include<math.h>


int main()
{
    float prod,parc,prod10,comAvista,compar;
    int n;

    printf("digite o valor do produto:\n");
    scanf("%f",prod);
    printf("produto a vista ou parcelado?\n caso seja a vista digite 0 \n caso seja parcelado digite o numero de parcela:\n");
    scanf("%d",&n);
    prod10=(prod*10/100)+prod;
    comAvista=prod10*5/100;
    if(n==0){
        printf("o valor do produto: %f",prod10);
        printf("Comissao sobre a venda a vista:%f",comAvista);

    }
    else{
        parc=((prod*3/100)+prod)/n;
        compar=(parc*n)*5/100;
        printf("O valor da parcela eh:%f",parc);
        printf("comissao sobre venda parcelada %f",compar);

    
    }
    
    
    return 0;
}