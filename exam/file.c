#include <stdio.h>
#include <stdlib.h>

void main(){
    FILE *file;
    char ch;
    file = fopen("data2.txt","w+");
    fprintf(file,"Mukes \n");
    fclose(file);
    file = fopen("data2.txt","r");
    while(!feof(file)){
        ch = fgetc(file);
        putchar(ch);
    }
    fclose(file);

}