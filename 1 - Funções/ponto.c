#include <stdio.h>
#include <math.h>

double ponto(double pxa,double pya, double pxb, double pyb){
    double dist = 0;
    dist = sqrt( pow(pxa - pxb, 2) + pow(pya - pyb, 2) );

    if(dist <= 3){
        return 1;
    }
    else{
        return 0;
    }
}


int main(void){
    double px, py, status;
    int N;

    scanf("%lf %lf", &px, &py);
    scanf("%d", &N);

    double pX1[N], pY1[N];
    
    for(int i = 0; i < N; i++){
        scanf("%lf %lf", &pX1[i], &pY1[i]);
    }

    for(int i = 0; i < N; i++){
        status = ponto(px, py, pX1[i], pY1[i]);
        if(status == 1){
            printf("S");
            break;
        }
    }

    if(status == 0){
        printf("N");
    }
    return 0;
}