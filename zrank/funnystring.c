/*https://www.hackerrank.com/challenges/funny-string/problem?utm_campaign=challenge-recommendation&utm_medium=email&utm_source=60-day-campaign
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main(){
    char s[10000];
    printf("Enter the string");
    scanf("%s",&s);
    int l;
    l = strlen(s);
    int m = l, a = 1,b,c;
    char srev[l];
    strcpy(srev,s);
    strrev(srev);
    
    //printf("%s",srev);

    for(int i=0;i<l-1;i++){
        b = abs(s[i+1] - s[i]);
        c = abs(srev[i+1] - srev[i]);
        if(b!=c){
            a = 0;
            break;
        }
    }
    if(a == 1){
        printf("\nFunny");
    }
    else{
        printf("\nNotFunny");
    }
}
