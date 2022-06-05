/*
Author: Billy Ridgeway
Purpose: Practice loops creating a guessing game.
Date: 22 May 2022.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    time_t t;
    srand((unsigned) time(&t));
    int randomNumber = rand()%21;
    int yourGuess = 7;
    int numberOfGuesses = 5;


    printf("This is a guessing game.\nI have chosen a number between 0 and 20 which you must guess.\n");
    printf("\n");



            printf("You have %d tries left.\n", numberOfGuesses);
            printf("Enter a guess: ");

            scanf("%d", &yourGuess);

            while(yourGuess != randomNumber && numberOfGuesses <= 5)
            {

                if(yourGuess >= 0 && yourGuess <= 20)
                {
                        if(yourGuess < randomNumber)
                        {
                            printf("Sorry, %d is wrong. My number is greater than that.\n\n", yourGuess);
                            printf("\n");
                            numberOfGuesses--;;

                            printf("You have %d tries left.\n", numberOfGuesses);
                            printf("Enter a guess: ");
                            scanf("%d", &yourGuess);
                        }else
                        {
                            printf("Sorry, %d is wrong. My number is less than that.\n", yourGuess);
                            printf("\n");
                            numberOfGuesses--;

                            printf("You have %d tries left.\n", numberOfGuesses);
                            printf("Enter a guess: ");
                            scanf("%d", &yourGuess);
                        }

                }else{
                    printf("\n");
                    printf("The number you entered is invalid. Please enter a number between 0 and 20: \n");
                    printf("\n");
                    printf("You have %d tries left.\n", numberOfGuesses);
                    printf("Enter a guess: ");
                    scanf("%d", &yourGuess);

                    }
            }

            printf("\n");
            printf("Congratulations. You guessed it!\n");



    return 0;
}
