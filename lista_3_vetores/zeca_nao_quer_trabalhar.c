#include <stdio.h>
int main(){
    int valorTv, nAmgs, calc, i=0, v=0;
    scanf("%d %d", &valorTv, &nAmgs);
    int emprestimos[nAmgs];
    for(i; i < nAmgs; i++){
        scanf("%d", &emprestimos[i]);
    }
    for(int v1=0; v1 < nAmgs-2; v1++){
        for(int v2=1; v2 < nAmgs-1; v2++){
            for(int v3=2; v3 < nAmgs; v3++){
                calc = emprestimos[v1] + emprestimos[v2] + emprestimos[v3];
                calc == valorTv ? v++ : v+0;
            }
        }
    }
    if(v >= 1)
        printf("Zeca nao vai ter que trabalhar!\n");
    else
        printf("Zeca vai ter que trabalhar.\n");
    return 0;
}