#include <stdio.h>

typedef struct {
    char name[50];
    float n1;
    float n2;
    float media;
} alunoData;

void readData(int num, alunoData aluno[num]){
    
}


int main(void){
    int numAlunos;
    printf("Quantos alunos: ");
    scanf("%d", &numAlunos);

    alunoData aluno[numAlunos], *prt_aluno;
    printf("Digite os dados:\n");
    for(int i=0;i<numAlunos;i++){
        prt_aluno = &aluno;
        printf("Nome aluno %d: ", i+1);
        scanf("%[^\n]", &(prt_aluno+i)->name);
    }
    printf("\nSAIDA:\n");
    for(int i=0;i<numAlunos;i++){
        printf("Nome: %s", aluno->name[0]);
    }
    
    //readData(numAlunos, aluno);

    return 0;
}