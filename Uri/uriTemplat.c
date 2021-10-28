#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0, n2=0;
    double tn=0, serie=0;

    scanf("%lf", &tn);

    while (serie>-1){
        scanf("%lf", &serie);
        if (serie == -1){
            break;
        }
        else if(serie>=tn){
            n++;
            n2++;
        }
    }
    if (n2%8>0){
        n2=n2+1;
    }
    printf("%d %d", n, n2);

    return 0;
}