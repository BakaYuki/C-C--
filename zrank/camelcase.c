
/* sample Input: feedDogsKillHumans
   sample Output: 4
   string contains 4 words:
   1. feed
   2. Dogs
   3. Kill
   4. Humans

   */


#include <stdio.h>
#include <string.h>     // for using strlen
#include <ctype.h>   // for using toupper


int main(){
    char word[100];
    printf("Enter the word\n");
    scanf("%s",word);
    int x,i;
    int count = 1;
    x = strlen(word);
    char upper[x];
    for(i=0;i<x;i++){
        
        upper[i]= toupper(word[i]);
        if(upper[i]==word[i]){
            count = count +1;
        }
    }
    printf("%d",count);
}