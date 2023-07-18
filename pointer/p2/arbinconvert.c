#include <stdio.h>
//#include <ctype.h>

void converter(int *conv);
int main(){
    
    char *word;
    printf("Enter a word to convert\n");
    word = {"one","two"};
    
    for(int i=0 ;*(word +i ) !='\0' ; i++){
        printf("%c",(word+i));
    }   
    return 0;
}    
    /*
    converter(word);

    printf("%s",word);
}

void converter(char *conv){
    for( ;conv != '/0' ; conv++){
        if(conv>96 && conv <122){   //detecting lowercases
            *conv = toupper(*conv);
        }
        else{
            *conv = tolower(*conv);
        }
    }
}

*/