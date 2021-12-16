#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0, n2=0;
    double tn=0, serie=0;

    scanf("%lf", &tn);

    while (serie>-1){
        scanf("%lf", &serie);
        n2++;
        if (serie == -1){
            break;
        }
        else if(serie<=tn){
            n++;
        }
    }
    n2 = n /8;
    if(n%8 > 0){
        n2++;
    } 
    printf("%d %d", n, n2);

    return 0;
}