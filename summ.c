#include <stdio.h>

int main() {
    int num;
    char choice;
    int sum = 0;

    printf("Enter integers to calculate their sum.\n");
    printf("Type 'q' to quit and display the final sum.\n");

    while (1) {
        printf("Enter an integer: ");
        if (scanf("%d", &num) == 1) {
            sum += num;
        } else {
            scanf("%s", &choice);
            if (choice == 'q') {
                break;
            } else {
                printf("Invalid input. Please enter an integer or 'q' to quit.\n");
            }
        }
    }

    printf("Final sum: %d\n", sum);
    return 0;
}
