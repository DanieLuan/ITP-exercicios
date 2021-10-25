#include <stdio.h>

int main(){
    double valor = 0, valorTotal = 0;
    int unidades = 0, unidadesTotal = 0;

    while(1==1){
        scanf("%d", &unidades);
        if(unidades == -1){
            break;
        }
        else{
            scanf("%lf", &valor);

            valorTotal = valorTotal + (unidades*valor);
            unidadesTotal = unidadesTotal + unidades;
        }
    }
    printf("%d %.2lf", unidadesTotal, valorTotal);
    return 0;
}