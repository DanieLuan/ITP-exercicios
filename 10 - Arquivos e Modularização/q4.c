#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void){
    char end[255];
    struct tm *start;
    time_t start_t;
    time(&start_t);
    start = localtime(&start_t);

    FILE *log;

    log = fopen("src/log.txt", "w");

    if(log == NULL){
        printf("Error 404. Archive Not Found.\n");
    }
    else{
        fprintf(log, "[%d-%d-%d %d:%d:%d] Inicio do programa\n", start->tm_mday, start->tm_mon+1, start->tm_year+1900, start->tm_hour, start->tm_min, start->tm_sec);

        do{
           fgets(end, 255, stdin);
            end[strlen(end)-1] = '\0';
        } while(strcmp(end, "SAIR") != 0);

        struct tm *end;
        time_t end_time;
        time(&end_time);
        end = localtime(&end_time);

        fprintf(log, "[%d-%d-%d %d:%d:%d] Final do programa\n", end->tm_mday, end->tm_mon+1, end->tm_year+1900, end->tm_hour, end->tm_min, end->tm_sec);
        
        fclose(log);
    }
    return 0;
}