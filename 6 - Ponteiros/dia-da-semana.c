#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int diadasemana(char data[],char *exit[10], int *bstx){
    int b = 0;
    //
    int d = 0;
    int im = 10*(data[3] - '0') + (data[4] - '0');
    int iy = 1000*(data[6] - '0') + 100*(data[7] - '0') + 10*(data[8] - '0') + (data[9] - '0');
    d = (10*(data[0] - '0') + (data[1] - '0'));
    
    if(data[2] != '/' && data[5] != '/')
        return -2;
    
    if(iy % 400 == 0) 
        *bstx = 1;
    else if(iy % 100 == 0) 
        *bstx = 0;
    else if(iy % 4 == 0)
        *bstx = 1;
    else
        *bstx = 0;

    int day = (d += (im<3?iy--:iy-2),23*im/9+d+4+iy/4-iy/100+iy/400)%7;

    if(day == 0){
        *exit = "Domingo.";
    }
    else if(day == 1){
        *exit = "Segunda";
    }
    else if(day == 2){
        *exit = "Terça";
    }
    else if(day == 3){
        *exit = "Quarta";
    }
    else if(day == 4){
        *exit = "Quinta";
    }
    else if(day == 5){
        *exit = "Sexta";
    }
    else if(day == 6){
        *exit = "Sábado";
    }

    if((10*(data[0] - '0') + (data[1] - '0')) > 31 || im > 12){
        return -1;
    }
    if((10*(data[0] - '0') + (data[1] - '0')) > 30 && (im == 4 || im == 6 || im == 9 || im == 11)){
        return -1;
    }
    if((10*(data[0] - '0') + (data[1] - '0')) == 29 && im == 2 && *bstx == 0){
        return -1;
    }

    return 1;
}

int main(){
    int status=0, bissexto=0;
    char entrada[11]={0}, *saida=NULL;
    fgets(entrada,11,stdin);
        
    status = diadasemana(entrada, &saida, &bissexto);
        
    if (status>0)
        printf("%s.%s\n", saida, 
            bissexto? " Ano bissexto." : "");
    else {
        if (status==-1)
            printf("Data inexistente.\n");
        else
            printf("Entrada invalida.\n");
        return 1;
    }

    return 0;
}