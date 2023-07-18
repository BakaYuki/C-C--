#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int play();

int main(){
    

    char answer;
    int actualcard=0,card;

    printf("******** Welcome to The Game of Cards *******************\n");
    printf("You should get 21 to win the game perfectly\n");
    printf("Press 'Y' to play and 'N' to exit the game\n");
    scanf("%c",&answer);
    
    while(answer=='Y'|| answer =='y'){
        
        card = play();
        actualcard = actualcard + card;

        printf("Your total sum is: %d \n\n\n",actualcard);
        if(actualcard<21){
            printf("Would u like to draw another card?\n");
            scanf("%c",&answer);
        }
        if(actualcard>21){
            printf("You have lost the game since your total sum is greater than 21\n");
            answer = 'N';
            
        }
        if(actualcard==21){
            printf("You got the perfect score: %d \n",actualcard);
            printf("You have won the game");
            answer = 'N';
            
        }
        
    }
    
    printf("Thank you for playing");


}

int play(){
    int card1;
    char throw;
    
    srand(time(NULL));
    printf("Press enter to shuffle the cards\n");
    scanf("%c",&throw);
    card1 = 1 + rand() % 13;
    
    printf("You got the card: %d \n",card1);

    return card1;
    
    
}

