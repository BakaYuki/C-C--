#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int play();

int main(){
    

    char answer, answer2;
    int actualcard=0,card;
    int player1,player2;

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
            scanf(" %c",&answer);
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
    player1 = actualcard;
    
    answer2 = 'Y';
    printf("\n \nPlayer 2's turn\n");
    printf("Press 'Y' to play and 'N' to exit the game\n");
    scanf(" %c",&answer2);
    card;
    actualcard = 0;
    while(answer2=='Y'|| answer2 =='y'){
        
        card = play();
        actualcard = actualcard + card;

        printf("Your total sum is: %d \n\n\n",actualcard);
        if(actualcard<21){
            printf("Would u like to draw another card?\n");
            scanf(" %c",&answer2);
        }
        if(actualcard>21){
            printf("You have lost the game since your total sum is greater than 21\n");
            answer2 = 'N';
            
        }
        if(actualcard==21){
            printf("You got the perfect score: %d \n",actualcard);
            printf("You have won the game");
            answer2 = 'N';
            
        }
            
    }

    player2 = actualcard;

    printf("\nPlayer1 : %d",player1);
    printf("\nPlayer2 : %d\n",player2);

    if(player1<22){
        if(player1>player2){
            printf("Player 1 has won");
        }
        else if(player2>player1){
            printf("Player 2 has won");
        }
        else{
            printf("Its a tie");
        }
    }
    else{
        printf("Player 2 has won");
    }
    
    
    printf("\nThank you for playing");


}

int play(){
    int card1;
    char throw;
    
    srand(time(NULL));
    printf("*****Shuffling the cards*******\n");
    scanf("%c",&throw);
    card1 = 1 + rand() % 13;
    
    printf("You got the card: %d \n",card1);

    return card1;
    
    
}

