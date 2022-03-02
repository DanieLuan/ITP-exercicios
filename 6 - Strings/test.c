#include <stdio.h>
#include <string.h>

int main(){
    char frase[50];
    char text[200];

    scanf(" %[^\n]", text);

    while(scanf(" %[^.]", frase) != EOF){
        
    }
    strcat(text, frase);
    printf("\ntext: %s\n", text);
    return 0;
}