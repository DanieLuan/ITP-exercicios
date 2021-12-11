#include <stdio.h>
#include <string.h>

int main(){
    int n, m;

    scanf("%d\n", &n);
    //entrada prefixos
    if(n != 0){
        char prefixos[n][100];
        for(int i = 0; i < n; i++){
            fgets(prefixos[i], 99, stdin);
            prefixos[i][strlen(prefixos[i])-1] = '\0';
        }
    }
    else{
        char prefixos[0][100] = "\0";
    }
    
    scanf("%d\n", &m);
    //entrada sufixos
    if(m != 0){
        char sufixos[m][100];
        for(int j = 0; j < n; j++){
            fgets(sufixos[j], 99, stdin);
            sufixos[j][strlen(sufixos[j])-1] = '\0';
        }
    }
    else{
        char sufixos[0][100] = "\0";
    }
    
    //entrada palavras
    char palavras[100];
    while(strcmp(palavras, "-1") != 0){
        fgets(palavras, 99, stdin);
        palavras[strlen(palavras)-1] = '\0';

    //remover prefixos
    int count = 0;

            for(int j = 0; j < n; j++){
                for(int k = 0; k < strlen(prefixos[j]); k++){
                    if(palavras[k] == prefixos[j][k])
                        count++;
                    
                    if(count == strlen(prefixos[j]))
                        printf("tirando...");
                    
    
                }
                
            }

    }

    

    return 0;
}