#include <stdio.h>
#include "findValues.h"

int main(void){
    int n;

    scanf("%d", &n);
    int vet[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &vet[i]);
    
    int minorVar = minor(n, vet);
    int majorVar = major(n, vet);
    printf("O menor valor inserido foi: %d\n", minorVar);
    printf("O maior valor inserido foi: %d\n", majorVar);
    
    return 0;
}