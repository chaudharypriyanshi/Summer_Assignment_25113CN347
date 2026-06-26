//Number Guessing Game
#include<stdio.h>

int main()
{
    int secret = 25, guess;

    printf("Guess a number (1-50): ");
    scanf("%d",&guess);

    if(guess==secret)
        printf("Correct Guess");
    else if(guess<secret)
        printf("Too Small");
    else
        printf("Too Large");

    return 0;
}