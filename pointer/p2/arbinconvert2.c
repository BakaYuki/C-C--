#include <stdio.h>
#include <ctype.h>
#define limit 100

void converter(char *);

void main(){
    char word[limit];

    printf("Enter a word\n");
    scanf("%s",word);

    converter(word);
    printf("%s",word    );
}

void converter(char *conv){
    
    if(*conv >= 97 && *conv<=122){
        for(int i = 0; *(conv + i)!= '\0';i++){
            *(conv+i) = toupper(*(conv+i));
    }
         
    }
    else{
        for(int i = 0; *(conv + i)!= '\0';i++){
            *(conv+i) = tolower(*(conv+i));
    }
    }
}