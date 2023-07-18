#include <stdio.h>
#include <string.h>

void palindrome(char line[],int len);

void main(){
    
    char str[1000];
    int len;
    printf("Enter a string \n");
    gets(str);
    len = strlen(str);
    palindrome(str,len);
}

void palindrome(char line[],int len){
    len = len-1;
    int bool = 0;
    for( int i = 0;i<len;i++){
        if(line[i]!=line[len]){
            bool = 1;
            break;
        }
        len--;
    }
    if(bool == 0){
        printf("Palindrome");
    }

    else{
        printf("Not a Palindrome");
    }
}