#include <stdio.h>
int dprimo(int x){
    if (primo(x)){
        return x;
    }
    for(int i=x; x * 2 > i; i++){
        if(primo(i)){
            return i;
        }
    }
}
int primo(int x){ 
    if(1 == x){
        return 0;
    }
    for(int i=2; x > i; i++){
        if( x % i==0 ){
            return 0;
        }
    }
    return 1;
}
int aprimo(int x){
    if ( primo(x)){
        return x;
    }
    for(int i=x; 2 < i; i--){
        if(primo(i)){
            return i;
        }
        else{
            continue;
        }
    }
}
int main(){
    int cont = 0, p, q, ant, suc;
    float resp;
    scanf("%d %d", &p, &q);
    for(p; p <= q; p++){
        if(primo(p)){
            suc = dprimo(p+1);
            ant = aprimo(p-1);
            resp = ((suc + 0.0) + (ant + 0.0)) / 2;
            if(resp == p){
                cont++;
            }
        }
    }
    printf("%d\n", cont);
    return 0;
}