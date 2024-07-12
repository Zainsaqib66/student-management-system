#include <stdio.h>

// Function to calculate factorial of a number iteratively
int factorial(int n) {
    int result = 1;

    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    return result;
}

int main() {
    int num;

    // User se number input lena
    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Factorial calculate karna aur print karna
        printf("Factorial of %d is %d\n", num, factorial(num));
    }

    return 0;
}
