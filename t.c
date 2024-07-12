#include <stdio.h>

int main() {
    int n, i, max;

    // Ask user how many numbers they want to enter
    printf("How many numbers do you want to enter? ");
    scanf("%d", &n);

    // Declare an array to store the numbers
    int numbers[n];

    // Input numbers from user
    for (i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Initialize max with the first element of the array
    max = numbers[0];

    // Find the maximum number
    for (i = 1; i < n; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    // Display the maximum number
    printf("The maximum number is %d\n", max);

    return 0;
}

