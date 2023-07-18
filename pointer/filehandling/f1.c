#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <process.h>

void main(){
    FILE *fp;
    char ch;
    fp = fopen("data.txt","a");
    if(fp==NULL)
    {
        printf("File cannot be open");
        exit(1);
    }
    puts("Enter data to store in file");
    while((ch=getchar())!='\n'){
        fputc(ch,fp);
    }
    fclose(fp);
    printf("\nContents read from file\n");
    fp = fopen("data.txt","r");
    while(!feof(fp)){
        ch = fgetc(fp);
        putchar(ch);
    }
    getch();
}
