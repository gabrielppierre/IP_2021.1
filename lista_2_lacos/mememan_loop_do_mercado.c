#include <stdio.h>

int main(){
    int temp, min, i;
    scanf("%d %d", &temp, &min);
    for(i = 0; temp; i++){
        if(temp){
            if(temp % 13 == 0){
                temp -= 60;
            }
            else if(temp % 60 == 0){
                temp += 30;
            }
            else if((i/60) > min){
                printf("fui pedir comida mesmo\n");
                return 0;
            }
        }else
            break;
        temp++;
    }
    printf("%d\n", i);
    return 0;
}