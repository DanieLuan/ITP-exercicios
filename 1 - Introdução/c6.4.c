#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tamanho_crivo 10000

int main()
{
    int num, i, j, cont=0, resp, fatores[1000], vezes[1000], aux;

    // Monta o vetor para determinar se um número é primo ou não
    char crivo[tamanho_crivo];
    memset(crivo, 1, tamanho_crivo);
    crivo[0] = 0;
    crivo[1] = 0;
    for(i=2; i < tamanho_crivo; i++){
        if(crivo[i] == 1)
            for(j=2*i; j < tamanho_crivo; j = j+i)
                crivo[j] = 0;  // Números que não são primos, pois são divisíveis por i 
    }

    printf("digite um numero inteiro positivo:\n");
    scanf("%i", &num);

    // Parte que executa a fatoração
    memset(vezes, 0, 1000*sizeof(int));
    aux = num;
    for(i=2; i<num; i++){
        if(crivo[i]){
            if(aux%i == 0){
                fatores[cont] = i;
                cont++;
            }
            while(aux%i == 0){
                vezes[cont-1]++;
                aux = aux/i;
            }
        }
    }

    // Imprime os resultados
    printf(" ");
    for(i=0; i< cont; i++)
            printf("%d    ", vezes[i]);
    printf("\n");
    for(i=0; i< cont; i++){
        printf("%d", fatores[i]);
        if(i!=cont-1)
            printf("  * ", fatores[i]);
    }

    return 0;
}