#include <stdio.h>
#include <stdlib.h>

int main(){
    int numEquipes, atletasTotal=0, i, Catletas=0, Satletas=0, Latletas=0;
    char prova;

    scanf("%d", &numEquipes);

    for(i=0;i<numEquipes;i++){
        while(1==1){
            scanf("%c", &prova);
            if(prova == 'F'){
                break;
            }
            switch (prova){
            case 'S':
                Satletas++;
                break;
            case 'C':
                Catletas++;
                break;
            case 'L':
                Latletas++;
                break;
            }
        }
    }

    atletasTotal = Catletas+Satletas+Latletas;

    printf("%d %d %d %d",Catletas, Satletas, Latletas, atletasTotal);
    return 0;
}