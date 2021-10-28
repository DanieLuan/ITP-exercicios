#include <stdio.h>

int main(){
    double tempoLimite, tempoAtleta;
    int numAtletas, numSeries;

    scanf("%lf", &tempoLimite);

    while(1==1){
        scanf("%lf", &tempoAtleta);

        if(tempoAtleta == -1){
            break;
        }
        else if(tempoAtleta <= tempoLimite){
            numAtletas++;
        }
    }

    numSeries = numAtletas/8;
    if(numAtletas%8 > 0){
        numSeries++;
    }

    printf("%d %d", numAtletas, numSeries);

    return 0;
}