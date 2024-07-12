#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to print the board
void printBoard(int *balls) {
    printf("Balls on the table:\n");
    for (int i = 0; i < 15; i++) {
        if (balls[i] != 0) {
            printf("%d ", balls[i]);
        }
    }
    printf("\n");
}

// Function to simulate a shot
void takeShot(int *balls) {
    int ball;
    printf("Enter the ball number you want to pot (1-15): ");
    scanf("%d", &ball);

    if (ball < 1 || ball > 15) {
        printf("Invalid ball number. Try again.\n");
        return;
    }

    if (balls[ball - 1] == 0) {
        printf("Ball %d is already potted. Try again.\n", ball);
        return;
    }

    balls[ball - 1] = 0; // Ball is potted
    printf("Ball %d potted!\n", ball);
}

// Function to check if all balls are potted
int checkWin(int *balls) {
    for (int i = 0; i < 15; i++) {
        if (balls[i] != 0) {
            return 0; // Game is not over
        }
    }
    return 1; // All balls are potted
}

int main() {
    int balls[15];
    for (int i = 0; i < 15; i++) {
        balls[i] = i + 1; // Initialize balls from 1 to 15
    }

    printf("Welcome to the 8 Ball Pool Game!\n");
    while (1) {
        printBoard(balls);
        takeShot(balls);
        if (checkWin(balls)) {
            printf("Congratulations! All balls are potted.\n");
            break;
        }
    }

    return 0;
}
