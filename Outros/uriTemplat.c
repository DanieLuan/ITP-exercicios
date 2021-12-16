#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (void) {
  int index;
  char** names;
  int N = 0;
  int seed;
  for(;;){
    char nameTemp[29];
    fgets(nameTemp, 30, stdin);
    nameTemp[strlen (nameTemp) - 1] = '\0';

    names[N] = malloc(strlen(nameTemp) + 1);
    strcpy(names[N], nameTemp);

    if (strcmp(names[N],"acabou") == 0){
      free(names[N]);
      break;
    }
    N++;
  }
  scanf("%d",&seed);
  srand(seed);
  for(int i = N; i !=-2; ){
    index=rand()%N;
    printf("%s \n",names[index]);
    free(names[index]);
    names[index] = NULL;  
    i--;
  }
  return 0;
}