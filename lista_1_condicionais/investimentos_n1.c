#include <stdio.h>
int main(){
    int dinheiro, divida, pmais=0;
    scanf("%d %d", &dinheiro, &divida);

    if(divida % 100 != 0){
        pmais = 1;
        divida = ((divida / 100) + 1) * 100;
    }
    if( dinheiro - divida < 0){
        printf("Pedro vai ter que fugir\n");
    }
    else if(pmais == 1){
        printf("Pegou mais\nEsta pago\nSobrou %d", dinheiro - divida);
    }   
    else{
        printf("Esta pago\nSobrou %d", dinheiro - divida);
    }
    
    return 0;
}