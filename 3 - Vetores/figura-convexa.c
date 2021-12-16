#include <stdio.h>
#include <stdlib.h>

int angleCalc(int Xa,int Ya, int Xb, int Yb, int Xc, int Yc){
    int z;
    z = (int) ((Xb - Xa) * (Yc - Ya)) - ((Yb - Ya) * (Xc - Xa));

    return z;
}

int inOrOut(int z){
    if(z <= 0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(void){
    int N, M, status, d;
    scanf("%d %d", &N, &M);

    int figuraX[N], figuraY[N], cliquesX[M], cliquesY[M];
    char cliqueID[M];

    for(int i = 0; i < N; i++) // Entrada de dados das coordenadas X e Y dos pontos  da figura
        scanf("%d %d", &figuraX[i], &figuraY[i]);

    figuraX[N] = figuraX[0];
    figuraY[N] = figuraY[0];

    for(int i = 0; i < M; i++){ // Entrada de dados das coordenadas X e Y dos cliques
        scanf(" %c", &cliqueID[i]);
        scanf("%d %d",  &cliquesX[i], &cliquesY[i]);
    }
//----- Verificação dos pontos - cliques -----
    for(int j = 0; j < M; j++){

        status = 0;

        for(int i = 0; i < N; i++){ 
            d = angleCalc(figuraX[i], figuraY[i], figuraX[i+1], figuraY[i+1], cliquesX[j], cliquesY[j]);
            status = status + inOrOut(d);
        }
        if(status == N){
            printf("%c\n", cliqueID[j]);
        }
    }
    
    return 0;
}