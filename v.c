#include <stdio.h>

int main() {
    int rows, i, j, coef = 1;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Pattern 10:\n");
    for (i = 0; i < rows; i++) {
        for (j = 1; j <= rows - i; j++) {
            printf("  ");
        }
        for (j = 0; j <= i; j++) {
            if (j == 0 || i == j)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;
            printf("%4d", coef);
        }
        printf("\n");
    }

    return 0;
}
