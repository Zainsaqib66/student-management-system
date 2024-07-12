#include <stdio.h>

int main() {
    int num;
    int count = 0;
    int sum = 0;
    float average;
    char choice;

    printf("Enter integers to calculate their average.\n");
    printf("Type 'q' to quit and display the final average.\n");

    while (1) {
        printf("Enter an integer: ");
        if (scanf("%d", &num) == 1) {
            sum += num;
            count++;
        } else {
            scanf("%s", &choice);
            if (choice == 'q') {
                break;
            } else {
                printf("Invalid input. Please enter an integer or 'q' to quit.\n");
                // Clear the input buffer
                while (getchar() != '\n');
            }
        }
    }

    if (count != 0) {
        average = (float)sum / count;
        printf("Final average: %.2f\n", average);
    } else {
        printf("No numbers were entered.\n");
    }

    return 0;
}

