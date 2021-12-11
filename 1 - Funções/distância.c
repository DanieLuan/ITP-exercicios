#include <stdio.h>
#include <math.h>

void prodCrz(double Xa,double Ya, double Xb, double Yb, double Xc, double Yc, double* add_z, double* add_AB){

    *add_z = ((Xa - Xb) * (Ya - Yc)) - ((Ya - Yb) * (Xa - Xc));
    *add_AB = sqrt(pow(Xa - Xb, 2) + pow(Ya - Yb, 2));
}

void dist(double z, double AB, double* add_dist){
    
    *add_dist = ceil(z / AB);
}

double status(double dist){
    double d = dist;
    if(d >= 0 && d <= 3){
        return 1;
    }
    else{
        return 0;
    }
}

int main(void){
    double AB, z, d;
    double px, py, inOrOut;
    int N;

    scanf("%lf %lf", &px, &py);
    scanf("%d", &N);

    double pX[N+1], pY[N+1];
    
    for(int i = 0; i < N; i++){
        scanf("%lf %lf", &pX[i], &pY[i]);
        if(i == N-1){
            pX[i+1] = pX[0];
            pY[i+1] = pY[0];
        }
    }

    for(int i = 0; i < N; i++){
        prodCrz(pX[i], pY[i], pX[i+1], pY[i+1], px, py, &z, &AB);
        dist(z, AB, &d);
        inOrOut = status(d);
        if(inOrOut == 1){
            printf("S\n");
            break;
        }
    }
    if(inOrOut == 0){
        printf("N");
    }
    return 0;
}