#include <stdio.h>

int main(){
    int num, tamanho=0, nrepete, cont=0, i, j, aux;
    int qnt_cartas[10000] = {0};
    while( scanf("%d", &num) != -1 ){
        qnt_cartas[tamanho] = num;
        tamanho++;
    }
    for( i = 1; i < tamanho; i++ ){
        for( j = 0; j < tamanho-1; j++ ){
            if( qnt_cartas[j] > qnt_cartas[j+1]){
                aux = qnt_cartas[j];
                qnt_cartas[j] = qnt_cartas[j+1];
                qnt_cartas[j+1] = aux;
            }
        }
    }
    i=0;
    while(i < tamanho){
        if( qnt_cartas[i] != qnt_cartas[i+1]){
            nrepete=i;
            i--;
            cont++;
        }
        i+=2;
    }
    i=0;
    while(i < tamanho){
        printf("%d ", qnt_cartas[i]);
        i++;
    }
    if(cont != 0){
        printf("\n%d ", qnt_cartas[nrepete]);
    }
    else{
        printf("\n0");
    }
    return 0;
}