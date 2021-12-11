#include <stdio.h>

int main(void){
    int dados[5][4], crMax=0, matricula, course, exist = 0;

    for(int i = 0; i < 5; i++)
        for(int j = 0; j < 4; j++)
            scanf("%d", &dados[i][j]);

    scanf("%d", &course);

    for(int i = 0; i < 5; i++){
        if(dados[i][2] == course && dados[i][3] > crMax){
            exist = 1;
            crMax = dados[i][3];
            matricula = dados[i][0];
        }
    }
    if(exist == 1){
        printf("CR = %d\n", crMax);
        printf("Matricula = %d", matricula);
    }
    else if(exist == 0){
        printf("Curso nao existente");
    }
    return 0;
}