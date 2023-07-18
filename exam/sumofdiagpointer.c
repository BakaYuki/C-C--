#include <stdio.h>
#include <string.h>
void reverse(char str[]);

void main(){
    char stri[100];
    printf("Enter a string");
    scanf("%s",stri);
    reverse(stri);
}

void reverse(char str[]){
    int len,mid;

    len = strlen(str);
    char temp;
    if(len%2==0){
        mid = len /2;
    }
    else{
        len--;
        mid = len/2;
        len++;
    }
    len--;
    for(int i = 0;i<mid;i++){
        temp = str[i];
        str[i]= str[len];
        str[len] = temp;
        len--;
    }
    printf("\nReverse = %s",str);
}