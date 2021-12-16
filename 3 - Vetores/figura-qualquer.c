#include <stdio.h>
#include <stdlib.h>

int angleCalc(int Xa,int Ya, int Xb, int Yb, int Xc, int Yc){

    int z;
    z = (int) ((Xb - Xa) * (Yc - Ya)) - ((Yb - Ya) * (Xc - Xa));

    return z; //If z < 0 := está à direita && if z > 0 := está à esquerda
}

int cruzamento(int Xa,int Ya, int Xb, int Yb, int Xc, int Yc, int Xd, int Yd){

    int z1 = angleCalc(Xa, Ya, Xb, Yb, Xc, Yc);
    int z2 = angleCalc(Xa, Ya, Xb, Yb, Xd, Yd);
    int z3 = angleCalc(Xc, Yc, Xd, Yd, Xa, Ya);
    int z4 = angleCalc(Xc, Yc, Xd, Yd, Xb, Yb);

    if((z1 < 0 && z2 > 0) && (z1 != z2 && z3 != z4)){
        return 1;
    }
    else if((z1 > 0 && z2 < 0) && (z1 != z2 && z3 != z4)){
        return 1;
    }
    else{
        return 0;
    }
}

int main(void){
    int N, M, status, test, xMajor = 0;
    scanf("%d %d", &N, &M);

    int figuraX[N], figuraY[N], cliquesX[M], cliquesY[M], cliqueExtX[M], cliqueExtY[M];
    char cliqueID[M];

    for(int i = 0; i < N; i++){ // Entrada de dados das coordenadas X e Y dos pontos  da figura
        scanf("%d %d", &figuraX[i], &figuraY[i]);
        if(figuraX[i] >= xMajor){
            xMajor = figuraX[i];
        }
    }
    figuraX[N] = figuraX[0];
    figuraY[N] = figuraY[0];

    for(int i = 0; i < M; i++){ // Entrada de dados das coordenadas X e Y dos cliques + Entrada dos pontos da reta
        scanf(" %c", &cliqueID[i]);
        scanf("%d %d",  &cliquesX[i], &cliquesY[i]);
        cliqueExtY[i] = cliquesY[i];
    }
//----- Verificação dos pontos - cliques -----

    for(int j = 0; j < M; j++){ 
        status = 0;
        for(int i = 0; i < N; i++){ 
    
            test = cruzamento(figuraX[i], figuraY[i], figuraX[i+1], figuraY[i+1], cliquesX[j], cliquesY[j], xMajor, cliqueExtY[j]);
            status = status + test;
            
        }
        if(status % 2 != 0){
            printf("%c\n", cliqueID[j]);
        }
    }
    
    return 0;
}