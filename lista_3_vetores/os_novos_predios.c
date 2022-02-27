#include <stdio.h>
int main(){
    int numPredios, nAltos=0, nBaixos=0, nMedios=0, nDiferentes=0, predioMaior=0, predioMenor, diferenca;
    scanf("%d", &numPredios);
    int altPredios[numPredios];
    if(numPredios >= 1 && numPredios <= 100){
        for(int i=0; i < numPredios; i++){
            scanf("%d", &altPredios[i]);
            if(altPredios[i] != altPredios[i-1])
                nDiferentes++;
            if(altPredios[i] >= 100)
                nAltos++;
            else if(altPredios[i] >= 50 && altPredios[i] < 100)
                nMedios++;
            else if(altPredios[i] < 50)
                nBaixos++;
        }
        for(int i=0; i < numPredios; i++){
            if(altPredios[i] > predioMaior)
            predioMaior = altPredios[i];
        }
        predioMenor = predioMaior;
        for(int i=0; i < numPredios; i++){
            if(altPredios[i] < predioMenor)
            predioMenor = altPredios[i];
        }
        diferenca = predioMaior - predioMenor;
        printf("%d\n%d\n%d\n%d\n%d\n", nDiferentes, nAltos, nMedios, nBaixos, diferenca);
    }
    return 0;
}