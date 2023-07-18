/*Louise joined a social networking site to stay in touch with her friends. The signup page required her to input a name and a password. However, the password must be strong. The website considers a password to be strong if it satisfies the following criteria:

Its length is at least 6.
It contains at least one digit.
It contains at least one lowercase English character.
It contains at least one uppercase English character.
It contains at least one special character. The special characters are: !@#$%^&*()-+
She typed a random string of length  in the password field but wasn't sure if it was strong. Given the string she typed, can you find the minimum number of characters she must add to make her password strong?

Note: Here's the set of types of characters in a form you can paste in your solution:

numbers = "0123456789"
lower_case = "abcdefghijklmnopqrstuvwxyz"
upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
special_characters = "!@#$%^&*()-+"


    Sample Input: 
    3                           11
    Ab1                         #HackerRank

    Sample Output:
    3                           1 (The pw isnt strong enough, but she can make it strong by adding a single digit.)
    



*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int n;          //length of password
    int pwlength =0;
    int count = 0;
    int i;
    printf("Enter password Length\n");    
    scanf("%d",&n);

    printf("Enter password\n");
    char pw[n-1];     // password
    scanf("%s",pw);

    if(n<6){
        goto end;
    }

    for(i = 0; i<n;i++){
        if(pw[i] == '0' || pw[i] == '1' ||pw[i] =='2' ||pw[i] =='3' ||pw[i] == '4' ||pw[i] =='5' ||pw[i] =='6' ||pw[i] =='7' ||pw[i] =='8' ||pw[i] =='9'){
            count = count +1;
            i = n;
            printf("\nin 0,1");
            printf("\n count = %d",count);
        }
    }
    small:

    for(i =0;i<n;i++){
        if(pw[i] == 'a' || 'b'||'c'||'d'||'e'||'f'||'g'||'h'||'i'||'j'||'k'||'l'||'m'||'n'||'o'||'p'||'q'||'r'||'s'||'t'||'u'||'v'||'w'||'x'||'y'||'z'){
            count = count + 1;
            i = n; 
            printf("\n count in small abcd = %d",count);
            printf("\nin abcd");
            break;
        }
    }

    capital:
    for(i=0 ; i<n;i++){
        //if(pw[i]== 'A'||'B'||'C'||'D'||'E'||'F'||'G'||'H'||'I'||'J'||'K'||'L'||'M'||'N'||'O'||'P'||'Q'||'R'||'S'||'T'||'U'||'V'||'W'||'X'||'Y'||'Z'){
        if(pw[i]==toupper(pw[i])){  
            count = count +1;
            i = n;
            printf("\n count in capital abcd= %d",count);
            printf("\nin ABCD");
        }
    }

    special:
    for(i=0;i<n;i++){
        if(pw[i]== '!'||'@'||'#'||'$'||'%'||'^'||'&'||'*'||'-'||'+'){
            count = count +1;
            i = n;
            printf("\n count in special letters= %d",count);
        }
    }

    
    if( count <4){
        pwlength = 4-count;
    }
    else{
        printf("Count is greater than 4");
    }
    if(pwlength>4 && n>6){
        printf("Your Password is valid");
    }
    else{
        printf("%d",pwlength);
    }

    end:
        if(n<6){
            pwlength = 6-n;
            printf("%d",pwlength);
        }
}