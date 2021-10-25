#include <stdio.h>

int main(){
    double somaMedias=0, divisor, media;
    int anos, i;

    scanf("%d", &anos);

    for(i=0;i<anos;i++){
        scanf("%lf", &media);
        if(media != -1){
            somaMedias = somaMedias + media;
            divisor++;
        }
    }
    if(somaMedias == 0){
        printf("A competicao nao possui dados historicos!");
    }
    else{
        somaMedias = somaMedias / divisor;
        printf("%.2lf", somaMedias);
    }
    return 0;
}