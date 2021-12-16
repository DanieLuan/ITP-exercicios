#include <string.h>
#include <stdio.h>
#include <stdlib.h>
void Increment(int *a)
{
    *a = *a + 3;
}
int main(void){
    int a;
    int *p;
    p = &a;
    a = 10;
    Increment(&a);
    printf("a = %d", a);

return 0;
}