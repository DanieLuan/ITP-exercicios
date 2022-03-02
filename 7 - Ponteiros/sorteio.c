#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int qntd;
    int index = 0, seed, N = 0, sizeTemp;
    char **names;
    char tempNames[99];
    while(strcmp(tempNames,"acabou") == 0){
        
        fgets(tempNames, 100, stdin);
        tempNames[strlen(tempNames)-1] = '\0';
 
        names[N] = (char **) malloc(sizeof(char *) * strlen(tempNames)+1);
        strcpy(names[N],tempNames);
        if(strcmp(tempNames,"acabou") == 0)
            break;
        
        N++;
    }
    scanf("%d", &seed);
    
    for(int i = 0; i < N; i++){
        printf("%s\n", names[i]);
    }

    printf("\nover\n");
    return 0;
}