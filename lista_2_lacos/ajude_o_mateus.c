#include <stdio.h>
int main(){
    int k1, k2, k3, money, palheta1, palheta2, corda1, corda2, pedal1, pedal2, palhetab, pedalb, n = 0;
    scanf("%d %d %d %d %d %d %d", &money, &palheta1, &palheta2, &corda1, &corda2, &pedal1, &pedal2);
    
    pedalb = pedal1, palhetab = palheta1;
    k1 = palheta1;
    while(k1 < palheta2){
        k2 = corda1;
        while(k2 < corda2){
            k3 = pedal1;
            while(k3 < pedal2){
                if((k1 + k2 + k3) == money){
                    if(palheta1 >= k1 && pedal1 >= k3){
                        printf("S\n");
                        printf("%d %d %d\n", k1, k2, k3);
                        n++;
                    }
                }
                k3++;
            }
            k2++;
        }
        k1++;
    }
    if(n == 0)
        printf("N");
    
    return 0;
}