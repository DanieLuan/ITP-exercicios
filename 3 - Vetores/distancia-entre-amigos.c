#include <stdio.h>

int distMajor(int pred1,int pred2,int pred1Loc,int pred2Loc){
    int dpp, dap1, dap2, dTotal;
    if(pred1Loc == pred2Loc){
        dTotal = pred1;
    }
    else{
        dap1 = pred1;
        dap2 = pred2;
        dpp = pred1Loc - pred2Loc;
        dTotal = dap1 + dap2 + dpp;
    }
    return dTotal;
}

int main(void){

    int N, dMajor = 0, dTotal;
    scanf("%d", &N);//Ńúmeros de prédios da rua
    int predio[N-1]; 
    for(int i = 0; i < N; i++){ // Quantos andar cada prédio tem
        scanf("%d", &predio[i]);
    }

    for(int i = 0; i < N; i++){ // Quantos andar cada prédio tem
        for(int j = 0; j < N; j++){
            dTotal = distMajor(predio[i], predio[j], i, j);
            if(dTotal >= dMajor){
                dMajor = dTotal;
            }
        }
    }
    printf("%d", dMajor);

    return 0;
}