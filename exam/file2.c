#include <stdio.h>
#include <stdlib.h>

void main(){
    FILE *file;
    
    char buff;

    file = fopen("data2.txt","w+");
    while(!feof(file)){
        buff = fgetc(file);
        putchar(buff);
    }
    fclose(file);

}