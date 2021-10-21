#include <stdio.h>

int main() {

    int esqInfX, esqInfY, dirSupX, dirSupY, pontoX, pontoY;

    scanf("%d%d%d%d", &esqInfX, &esqInfY, &dirSupX, &dirSupY);
    scanf("%d%d", &pontoX, &pontoY);
    
    if(esqInfX <= pontoX && pontoX <= dirSupX){
        if(esqInfY <= pontoY && pontoY <= dirSupY){
        printf("Dentro!");    
        }
        else{
            printf("Fora!");  
        }
    }
    else{
        printf("Fora!");  
    }
    
    return 0;
}