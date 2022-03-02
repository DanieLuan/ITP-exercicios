#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char read[255];
    char drt_arq1[255];
    char drt_to_cpy[255];
    FILE *arq_to_cpy;
    FILE *arq_cpy;

    fgets(drt_arq1, 255, stdin);
    drt_arq1[strlen(drt_arq1)-1] = '\0';
    fgets(drt_to_cpy, 255, stdin);
    drt_to_cpy[strlen(drt_to_cpy)-1] = '\0';
    
    arq_to_cpy = fopen(drt_arq1, "r");
    arq_cpy = fopen(drt_to_cpy, "w");

    if(arq_cpy == NULL || arq_to_cpy == NULL){
        printf("Error 404. Archive Not Found.\n");
    } else {
        
        while(fgets(read, 255, arq_to_cpy) != NULL){
            fputs(read, arq_cpy);
        }
        
        fclose(arq_to_cpy);
        fclose(arq_cpy);
        
        printf("\nArquivo copiado!\n");
    }
    return 0;
}