#include <stdio.h>

typedef struct
{
    int nlin, ncol;
    int **mat;
} Matrix;

Matrix* createMatrix(int nlin, int ncol){
    

};

void readMatrix(Matrix *m){

}
void printMatrix(Matrix *m){

}

void destroyMatrix(Matrix **m){
    
}

int main(void){
    int lin, col;
    Matrix* mat;

    scanf("%i %i", &lin, &col);
    mat = createMatrix(lin, col);
    readMatrix(mat);
    printMatrix(mat);
    destroyMatrix(&mat);
    if(mat == NULL) {
        printf("OK\n");
    }
    return 0;
}