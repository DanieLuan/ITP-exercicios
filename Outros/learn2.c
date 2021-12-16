#include <stdio.h>
#include <stdlib.h>

int main() {
  int *vetor;

  vetor = calloc(10, sizeof(int));

  for(int i=0; i<10; i++)
    printf("%d ", vetor[i]);

  vetor = realloc(vetor, sizeof(int) * 20);

  return 0;
}