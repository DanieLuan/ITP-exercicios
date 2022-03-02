#include <stdio.h>

int main(void){
    int matrix[3][5], marray[3]={0,0,0};

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 5; j++)
            scanf("%d", &matrix[i][j]);

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 5; j++)
            marray[i] = marray[i] + matrix[i][j];

    printf("SL = [");
    for(int i = 0; i < 2; i++)
        printf("%d ", marray[i]);
    printf("%d]", marray[2]);
    return 0;
}