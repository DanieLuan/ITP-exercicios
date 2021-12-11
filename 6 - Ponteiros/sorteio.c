#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int qntd;

    char **names;

    while(strcmp(names, "acabou") != 0){

        fgets(names, 255, stdin);
        names[strlen(names)-1] = '\0';
        

    }
    
    return 0;
}