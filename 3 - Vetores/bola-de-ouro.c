#include <stdio.h>
#include <math.h>

int apostCalc(double bet, double Vtb, double total){
    int newValue;
    double div = (bet/Vtb);
    newValue = (double) (total * div) + 0.5;
    return newValue;
}

int main(void){
    int N, player, valorT=0, valorTP=0, betTotal = 0, wins=0, value=0;
    float petisco;
    scanf("%d", &N);
    int bets[N][2];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < 2; j++){
            scanf("%d", &bets[i][j]);
            if(j == 0){
                valorTP = valorTP + bets[i][j];
            }
        }
    }
    scanf("%d", &player);
    printf("Total: R$ %d\n", valorTP);

    petisco = valorTP * 0.1;
    valorT = valorTP - petisco;

    for(int i = 0; i < N; i++){
        if(bets[i][1] == player){
            wins++;
            betTotal = betTotal + bets[i][0];
        }
    }
    if(wins == 0){
        for(int i = 0; i < N; i++){
            value = apostCalc(bets[i][0], valorTP, valorT);
            printf("Apostador %d: R$ %d\n", i+1, value);
        }
    }
    if(wins != 0){
        for(int i = 0; i < N; i++){
            if(bets[i][1] == player){
                value = apostCalc(bets[i][0], betTotal, valorT);
                printf("Apostador %d: R$ %d\n", i+1, value);
                
            }
        }
    }
    printf("Bebidas e petiscos: R$ %.0f\n", ceil(petisco));

    return 0;

}