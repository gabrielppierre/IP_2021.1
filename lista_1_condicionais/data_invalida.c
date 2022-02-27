#include <stdio.h>

int main() {
    
    int D, M, A;
    scanf("%d %d %d", &D,&M,&A);

    if((A < 1900 || A > 2099) || (M <= 0 || M >= 13) || (D <= 0 || D >= 32 ))
        printf("invalida");
    else 
        if((A % 4 == 0 || A % 100 != 0 || A % 400 == 0) && D >= 1 && D < 29)
            printf("valida");
        else 
            if(D >= 29 && A != 2000)
                printf("invalida");
    else 
        if(M % 2 != 0 && (M != 9 || M == 8 || M == 10 || M == 12) && (D >= 1 && D <= 31))
            printf("valida");
        else
            if(M % 2 == 0 && (D >= 1 && D <= 30))
            printf("valida");
    else
        printf("invalida");
        
    return 0;
}