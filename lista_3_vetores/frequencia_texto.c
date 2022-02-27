#include <stdio.h>
#include <string.h>

int main(){
    int i, j, c = 0, cont = 0; 
    char vet1[1000], vet2[1000], aux, aux2;
    while(scanf("%c", &vet1[cont]) != -1){
        vet2[cont] = vet1[cont];
        cont++;
    }
    char ordem1[cont+1];
    int freq[cont+1];
    i = 0;
    while(i < cont){
        j = 0;
        while(j <cont){
            if( vet1[i] == vet2[j] ){
                ordem1[i] = vet1[i];
                c++;
            }
            j++;
        }
        freq[i] = c;
        c=0;
        i++;
    }
    for(i = 1; i < cont; i++){
        for(j =0; j < cont-1; j++){
            if(ordem1[j] < ordem1[j+1]){
                aux = ordem1[j];
                ordem1[j] = ordem1[j+1];
                ordem1[j+1] = aux;
                aux2 = freq[j];
                freq[j] = freq[j+1];
                freq[j+1] = aux2;
            }
        }
    }
    i = 0;
    while(i < cont){
        if(ordem1[i] != ordem1[i+1]){
            printf("%c %d\n", ordem1[i], freq[i]);
        }
        i++;
    }
    return 0;
}