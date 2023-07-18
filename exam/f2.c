#include <stdio.h>
#include<conio.h>
#include <process.h>

void main(){
    FILE *fp;
    char a = ' ';
    system("call");
    fp = fopen("data.txt","w");
    if(fp==NULL){
        printf("Cannot open file");
        exit(1);
    }
    printf("Write data & to stop press '.'");
    while(a!='.'){
        a = getche();
        fputc(a,fp);
    }
    fclose(fp);
}