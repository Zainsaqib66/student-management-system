#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main() {
    int number, guess, attempt = 0;
    srand(time(0));
    number = rand() % 100 + 1;

    while (1) {
        printf("Guess the number between 1 to 100: ");
        scanf("%d", &guess);
        attempt++;

        if (guess > number) {
            printf("The number is so high. Attempts: %d\nTry again!\n", attempt);
        } else if (guess < number) {
            printf("The number is so low. Attempts: %d\nTry again!\n", attempt);
        } else {
            printf("Congratulations! You guessed the correct number in %d attempts.\n", attempt);
            break;
        }
    }
    getch ();

    return 0;
}
