#include <stdio.h>

int main(){
    int n, x, y, z;
    scanf("%d %d %d %d", &n, &x, &y, &z);
    
    if ((n < x) && (n < y) && (n < z))
        printf("0");
    else if((x + y + z) <= n)
        printf("3");
    else if((((x + y) < n) || (y + z) < n) || (z + x < n) || ((x == n) && (y + z == n)) || ((y == n) && (x + z == n)) || ((z == n) && (x + y == n)))
        printf("2");
    else
        printf("1");
        
    return 0;
}