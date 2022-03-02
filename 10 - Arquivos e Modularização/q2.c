#include <stdio.h>
#include <stdlib.h>

int main(void){
    char read[2];
    FILE *img;
    img = fopen("C:/Users/usiario/Desktop/xp.jpg", "r");

    if(img == NULL){
        printf("Error 404. Archive Not Found.\n");
    }
    else{
        fgets(read, 2*sizeof(char), img);
        printf("%s", read);
        fclose(img);
    }
    
    return 0;
}