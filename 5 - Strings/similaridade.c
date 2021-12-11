#include <stdio.h>
#include <string.h>

void strinside(char w1[10], char w2[10]){

    int count = 0, maior;
    if(strlen(w1) >= strlen(w2))
        maior = strlen(w1);
    else
        maior = strlen(w2);

    for (int i = 0; i < strlen(w1); i++){
        if(w1[i] == w2[i] && w1[i] != '\0' && w2[i] != '\0'){
            count++;  
        }
        else if(w1[i] == '\0' || w2[i] == '\0'){
            break;
        }
    }
    printf("       %d/%d", count, maior);
}
    

int main(void){
    int n = 0;
    while(n < 2){
        scanf("%d\n", &n);
    }
    
    char word[n][99];

    for(int i = 0; i < n; i++){
        fgets(word[i], 99, stdin);   
        word[i][strlen(word[i])-1] = '\0';     
    }
    //Colocando os nomes
    
    for(int i = 0; i < n; i++){
        if(i == 0){
            printf("          ");
        }
        printf("%10s", word[i]);
    }
    printf("\n");
    // Impressão da questão
    for(int i = 0; i < n; i++){
        printf("%-10s", word[i]);
        for (int j = 0; j < n; j++){
            strinside(word[i], word[j]);
        }
        printf("\n");
    }
    
    return 0;
}