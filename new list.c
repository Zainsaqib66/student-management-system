#include <stdio.h>

int main() {
    int num;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    // Read the input number from the user
    scanf("%d", &num);

    // Print numbers from 1 to the entered number
    printf("Numbers from 1 to %d: ", num);
    for (int i = 1; i <= num; ++i) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}

