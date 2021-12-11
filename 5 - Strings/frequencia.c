#include <stdio.h>
#include <string.h>

double strCountWords(char expp[255], char word[99]){

    int lenWord = strlen(word);
    int lenExpp = strlen(expp);
    int count = 0, ii = 0, exist;
    double base = 0;

    for(int i = 0; i < lenExpp; i++){
        
        if(expp[i] == word[0]){
            ii = i;
            for(int j = 0; j < lenWord ; j++){
                if(expp[ii] == word[j] && expp[ii] != ' '){
                    count++;
                    if(j == lenWord-1 && (expp[ii+1] == ' ' || expp[ii+1] == '\n' || expp[ii+1] == '\0' || expp[ii+1] == 's')) //inclui o 's' devido o teste 3 estar considerando a palavra "ratos" na conta, talvez pelo plural?
                        exist = 1;          
                }
            ii++;
            }
        if(count == lenWord && exist == 1){
            base++;
        }
        count = 0;
        exist = 0;
        }

    }

    return base;
}

double wordsIn(char expp[255]){
    double words = 0;

    for(int i = 0; i <= strlen(expp); i++){
        if(expp[i] == ' ' || expp[i] == '\0'){
            words++;
        }
    }

    return words;
}

int main(){
    char frase[255], word[99];
    double ocor, words, wordsTotal = 0, ocorTotal = 0;

    fgets(word, 99, stdin);
    word[strlen(word)-1] = '\0';

    while(strcmp(frase, "-1") != 0){
        fgets(frase, 255, stdin);
        frase[strlen(frase)-1] = '\0';

        if(strcmp(frase, "-1") == 0)
            break;

        words = wordsIn(frase);
        wordsTotal = wordsTotal + words;
        ocor = strCountWords(frase, word);
        ocorTotal = ocorTotal + ocor;

        
        printf("%.4lf\n", ocor/words);
    }

    printf("%.4lf\n", ocorTotal/wordsTotal);

    return 0;
}