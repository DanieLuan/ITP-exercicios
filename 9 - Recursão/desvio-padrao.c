#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double save(int count, double values[count]){
  if(count <= 0)
    return 0;
  else{
    scanf("%lf", &values[count-1]);
    return save(count-1, values);
  }
}

double sum(int count, double values[count]){ 
  if(count < 0)
    return 0;
  else{
    return values[count-1] + sum(count-1, values);
  }
}

double sqrsum(int count, double values[count]){
  if(count < 0)
    return 0;
  else
    return pow(values[count-1], 2) + sqrsum(count-1, values);
}

int main(void) {
  int n;
  scanf("%d", &n);
  double x[n], desv;
  x[n] = save(n, x);

  desv = sqrt((sqrsum(n, x)/n) - pow((sum(n, x)/n),2));
  
  printf("%.4lf", desv);

  return 0;
}