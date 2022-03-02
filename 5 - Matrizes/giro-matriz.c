#include <stdio.h>

int main(void){
    int matrix[3][3];

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            scanf("%d", &matrix[i][j]);
    
    for(int i = 0; i < 3; i++){
        for(int j = 2; j >= 0; j--)
            printf("%d ", matrix[j][i]);
        printf("\n");
    }
    return 0;
}