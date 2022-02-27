#include <stdio.h>
int main(){
    int a, b, c, d, e, f, g, h;
    scanf("%d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h);
    if((a == c) || (a == e) || (a == g))
        printf("Alguem nao esta satisfeito...");
    else if((b == a) || (b == d))
        printf("Alguem nao esta satisfeito...");
    else if((h == a) || (h == b) || (h == c) || (h == d) || (h == e))
        printf("Alguem nao esta satisfeito...");
    else if(((c == e) && (f != a)) || ((c !=  e) && (f == a)))
        printf("Alguem nao esta satisfeito...");
    else if((g == h) && (d != c))
        printf("Alguem nao esta satisfeito...");
    else 
        printf("Conseguimos times suficientes!");
    return 0;
}
