#include <stdio.h>
int main(){
    int num, nnum, div, max=0, d=2, c=0;
    scanf("%d", &num);
    nnum = num;
    while(d <= num){
        if(nnum %d == 0){
            for(c; nnum % d == 0; c++){
                nnum = nnum/d;
            }
        }
        if(max < c){
            div = d;
            max = c;
        }
        c = 0;
        d++;
    }
    printf("mostFrequent: %d, frequency: %d\n", div, max);
    return 0;
}