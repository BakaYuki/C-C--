#include<stdio.h>
#include<string.h>
void main(){
     char str[100];
     char *ptr;
     int len;
     int space=0,character=0,vowel=0;
     gets(str);
     ptr=str;
     len=strlen(str);
     for(int i=0;i<len;i++){
        if(*ptr==' '){
            space=space+1;
        }
        else{
            character=character+1;
        }
        if(*ptr=='A' ||*ptr=='E' ||*ptr=='I' ||*ptr=='O' ||*ptr=='U' ||*ptr=='a' ||*ptr=='e' ||*ptr=='i' ||*ptr=='o' ||*ptr=='u'){
           vowel++;
        }
        ptr++;
    }
    
    printf("The total number of character is %d\n",character);
    printf("The total number of space is %d\n",space);
    printf("The total number of vowel is %d\n",vowel);
       
}