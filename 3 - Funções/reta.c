#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float reta(float Px, float Py,float x1, float y1, float x2, float y2){
    if(x2 == x1){
        return 0;
    }

    float m = (y2 - y1) / (x2 - x1);
    int verify = (int) (Py - y1) - (m * (Px - x1));

    if(verify == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    float pX, pY, Reta;
    int N;

    scanf("%f %f", &pX, &pY);
    scanf("%d", &N);

    float X[N+1], Y[N+1];

    for(int i = 0; i < N; i++){
        scanf("%f %f", &X[i], &Y[i]);
        if(i == N-1){
            X[i+1] = X[0];
            Y[i+1] = Y[0];
        }
    }
    for(int i = 0; i < N; i++){

        Reta = reta(pX, pY, X[i], Y[i], X[i+1], Y[i+1]);
        if(Reta == 1){
            printf("S\n");
            break;
        }
    }
    if(Reta == 0){
        printf("N");
    }
    return 0;
}