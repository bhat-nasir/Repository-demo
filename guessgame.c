#include <stdio.h>
#include <stdlib.h> // Required for rand() and srand()
#include <time.h>   // Required for time()

int main() {
    int secret_number, guess, attempts = 0;

    // 1. Seed the random number generator using the current time
    // This ensures you get a different number every time you play
    srand(time(0)); 

    // 2. Generate a random number between 1 and 1000
    secret_number = (rand() % 1000) + 1;

    printf("--- Welcome to the Number Guessing Game! ---\n");
    printf("I have picked a number between 1 and 100.\n");

    // 3. The Game Loop
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secret_number) {
            printf("Too high! Try again.\n");
        } else if (guess < secret_number) {
            printf("Too low! Try again.\n");
        } else {
            printf("\nCongratulations! You found it in %d attempts.\n", attempts);
        }

    } while (guess != secret_number);

    return 0;
}