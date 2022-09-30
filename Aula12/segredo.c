#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SECRET 100

int main(void)
{
    int secret;
    int guess;
    int tries;

    srand(time(NULL)); // SEMENTE - que usa da biblioteca aleatória + a time para tem os 2 últimos dígitos aleatórios 

    secret = 1 + rand() % MAX_SECRET; // pegando os 2 últimos digitos, entre 1 e 100;
    tries = 0;

    do {
        printf("What is your  guess? ");
        scanf("%d", &guess);
        tries++;
        if (guess < secret) {
            printf("Too low\n");
        } else if (guess > secret){
            printf("Too High\n");
        }
    }while (guess != secret);

    printf("Congratulations! You guessed it in %d tries\n", tries);

    return 0;
}