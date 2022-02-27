#include <stdio.h>
#include <time.h>

int main(){
    int separador = 0;
    char data_inicial[32], data_final[32];
    struct tm tma, tmb;
    time_t diferenca;

    memset(&tma, 0, sizeof(tma));
    memset(&tmb, 0, sizeof(tmb));

    scanf("%s", data_inicial);

    separador = sscanf(data_inicial, "%02d/%02d/%04d", &tma.tm_mday, &tma.tm_mon, &tma.tm_year);

    tma.tm_mon -= 1;
    tma.tm_year -= 1900;

    scanf("%s", data_final);

    separador = sscanf( data_final, "%02d/%02d/%04d", &tmb.tm_mday, &tmb.tm_mon, &tmb.tm_year);

    tmb.tm_mon -= 1;
    tmb.tm_year -= 1900;

    diferenca = difftime(mktime(&tmb), mktime(&tma));

    printf("%ld\n", diferenca / (60 * 60 * 24));

    return 0;
}