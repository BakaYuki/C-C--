#include <stdio.h>
#include <string.h>

void delspace(char line[], int len);

void main(){
    char str[1000];
    int len;
    printf("enter string \n");
    gets(str);
    len = strlen(str);
    delspace(str,len);
}

void delspace(char line[], int len){
    for(int i =0;i<len;i++){
        if(line[i] ==' '){
            for(int j=i;j<len;j++){
                line[j] = line[j+1];
            }
            len--;
        }
    }
    printf("String after removing spaces: \n%s",line);
}