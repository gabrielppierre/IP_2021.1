#include <stdio.h>
int main(){
    int curvas, aceleracao;
    scanf("%d %d", &aceleracao, &curvas);
    
    while ( curvas != 0){
        if ( (30 % (aceleracao+1) == 0))
            printf("Curvou\n");

        else{
            printf("Pedro se cagou todo e foi pego.\n");
            break;
        }

         aceleracao++;
         curvas--;  
    }
}