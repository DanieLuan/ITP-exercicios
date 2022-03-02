#include <stdio.h>
#include <string.h>

int main(){
    char seq[255];

    fgets(seq, 255, stdin);
    seq[strlen(seq)-1] = '\0';

    int len = strlen(seq), count = 0, j = 0, ii = 0, seqs = 0;

    for(int i = 0; i < len; i++){
        ii = i + 4;
        j = i;
        while(j < ii){
            if(seq[j]+1 == seq[j+1] && ii < len && j < len)
                count++;
            //printf("numero: %c ", seq[j]);
            //printf("count : %d ", count);
            //printf("seqs  : %d ", seqs);
            //printf("i's   : %d\n", i);
            j++;
        }
        if(count == 4){
            seqs++;
            i = i + 4;
        }
        count = 0;
    }

    if(seqs != 0)
        printf("%d", seqs);
    else
        printf("nenhuma sequencia encontrada");

    return 0;
}