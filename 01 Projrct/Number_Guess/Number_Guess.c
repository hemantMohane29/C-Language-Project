#include <stdio.h>
#include<stdlib.h>  
#include<time.h>
int main()
{
    int random, guess;
    int no_guess = 0;
    srand(time(NULL)); // According to your time Guess the number 

    printf("\nWelcome to the World of Guess Number\n");
    random = rand() % 100 + 1;  // Generate blw 0 - 100

    do
    {
        printf("\nPlease Enter Your Guess between to (1 - 100) = ");
        scanf("%d",&guess);
        no_guess++;
        
        if (guess < random){
            printf("Guess Number is a larger. \n");
        }
        else if (guess > random){
            printf("Guess Number is a small. \n ");
        }
        else{
            printf("You have successfully guessed the number in %d attempts",no_guess);
        }
    } while (guess != random);

    printf("\n\n Bye Beta, Thank You for playing  this game.");
    printf(" -- Developed By Hemant Mohane --");
    return 0;
}