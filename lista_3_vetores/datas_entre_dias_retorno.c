#include <stdio.h>

int main(){
    int num, i, j, aux, cont=0;
    scanf("%d",&num);
    int elementos[num], comparador[num];
    for(i=0; i < num; i++){
        scanf("%d",&elementos[i]);
        comparador[i] = elementos[i];
    }
    for(i = 1; i < num; i++){
        for(j = 0; j < num-1; j++){
            if(comparador[j] > comparador[j+1]){
                aux = comparador[j];
                comparador[j] = comparador[j+1];
                comparador[j+1] = aux;
            }
        }
    }
    for(i = 0; i < num; i++){
        if(comparador[i] == elementos[i]){
            cont++;
        }
    }
    printf("%d\n", cont);
    for(i=0; i < num; i++){
        if(elementos[i] == comparador[i]){
            cont++;
            printf("%d %d\n", elementos[i], i+1);
        }
    }
    return 0;
}