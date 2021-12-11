#include <stdio.h>
#include <math.h>

double prodVetor(double Xa,double Ya, double Xb, double Yb, double Xc, double Yc){
    double z;
    z = ((Xb - Xa) * (Xc - Xb)) + ((Yb - Ya) * (Xc - Xb));

    return z;
}

double distAB(double Xa, double Ya, double Xb, double Yb){
    double d;
    d = sqrt(pow(Xa - Xb,2) + pow(Ya - Yb,2));

    return d;
}

double distVetor(double Xa, double Ya, double Xb, double Yb, double Xc, double Yc){
    double z, AB, d;
    z = ((Xa - Xb) * (Ya - Yc)) - ((Ya - Yb) * (Xa - Xc));
    AB = sqrt(pow(Xa - Xb, 2) + pow(Ya - Yb, 2));

    d = ceil(z / AB);
    return d;
}

double alphaCalc(double Xa,double Ya, double Xb, double Yb, double Xc, double Yc){
    double ABvBC, BAvAC, dist;

    ABvBC = prodVetor(Xa, Ya, Xb, Yb, Xc, Yc);
    BAvAC = prodVetor(Xb, Yb, Xa, Ya, Xc, Yc);

    if(ABvBC > 0){
        dist = distAB(Xb, Yb, Xc, Yc);

    }
    else if(BAvAC > 0){
        dist = distAB(Xa, Ya, Xc, Yc);
    }   
    else{
        dist = distVetor(Xa, Ya, Xb, Yb, Xc, Yc);
    }

    return dist;
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
    double d;
    double px, py, inOrOut;
    int N;

    scanf("%lf %lf", &px, &py);
    scanf("%d", &N);

    double pX[N+1], pY[N+1];
    
    for(int i = 0; i < N; i++){
        scanf("%lf %lf", &pX[i], &pY[i]); 
    }
    pX[N+1] = pX[0];
    pY[N+1] = pY[0];

    for(int i = 0; i < N; i++){
        
        d = alphaCalc(pX[i], pY[i], pX[i+1], pY[i+1], px, py);
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