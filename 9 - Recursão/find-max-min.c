#include <stdio.h>
#include <stdlib.h>

int minimum_col(int an, int am, int n, int m, int mat[n][m]){
    if(an == 1){
        return mat[an-1][am-1];
    } else {
        int element = mat[an-1][am-1];
        int next = minimum_col(an-1, am, n, m, mat);
        
        if(element < next){
            return element;
        } else {
            return next;
        }
    }
}

int maximum_col(int an, int am, int n, int m, int mat[n][m]){
    if(an == 1){
        return mat[an-1][am-1];
    } else {
        int element = mat[an-1][am-1];
        int next = maximum_col(an-1, am, n, m, mat);
        
        if(element > next){
            return element;
        } else {
            return next;
        }
    }
}

void print_values_col(int an, int am, int n, int m, int mat[n][m], int index){
    if(index == m){
        return 0;
    } else if(index < m){
        printf("Municipio %d: %d %d\n", index+1, minimum_col(an, index+1, n, m, mat), maximum_col(an, index+1, n, m, mat));

        print_values_col(an, am, n, m, mat, index+1);
    }
}

int main(){
    int n, m; //n : nº regiões | m : nº cidades

    scanf("%d %d", &n, &m);
    
    int data[n][m];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            scanf("%d", &data[i][j]);
    
    print_values_col(n, m, n, m, data, 0);
  
    return 0;
}