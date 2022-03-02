#include <stdio.h>

int main(void){
    int flores[5][3], aux = 0; //aux auxilia o programa à houve impressão

    for(int i = 0; i < 5; i++)
        for(int j = 0; j < 3; j++)
            scanf("%d", &flores[i][j]);
    
    for(int i = 0; i < 5; i++){
        if((flores[i][1] - flores[i][2]) != 0 && (flores[i][1] - flores[i][2]) > 0){
            aux = 1;
            printf("%d %d\n", flores[i][0], flores[i][1] - flores[i][2]);
        }
    }
    if(aux == 0){
        printf("Estoque Completo");
    }
    return 0;
}