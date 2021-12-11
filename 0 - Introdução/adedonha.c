#include <stdio.h>

int main() {

    int n1, n2, n3, n4, letraD = 64;

    scanf("%d%d%d%d", &n1, &n2, &n3, &n4);

    letraD = letraD + n1 + n2 + n3 + n4;

    if(n1+n2+n3+n4 <= 0){
        printf("Ei! Ninguém colocou nada!\n");
    }
    else if (n1+n2+n3+n4 > 26){
        letraD = 64 + (n1+n2+n3+n4 - 26);
        printf("Letra: %c\n", letraD);
    }
    else{
        printf("Letra: %c\n", letraD);
    }

    return 0;
}