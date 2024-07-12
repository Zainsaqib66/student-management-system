#include <stdio.h>

// Function prototypes
int inputNumber(char *message);
int calculateSum(int a, int b, int c);
int calculateSubtract(int a, int b, int c);
int calculateAverage(int sum);

int main() {
    int a, b, c, sum, subtract, average;

    a = inputNumber("Enter first number: ");
    b = inputNumber("Enter second number: ");
    c = inputNumber("Enter third number: ");

    sum = calculateSum(a, b, c);
    subtract = calculateSubtract(a, b, c);
    average = calculateAverage(sum);

    printf("\033[1;32mThe sum of numbers is\033[0m \033[1;30m=\033[0m\033[1;39m %d\033[0m\n", sum);
    printf("\033[1;32mThe subtract of numbers is\033[0m\033[1;30m = \033[0m\033[1;39m%d\033[0m\n", subtract);
    printf("\033[1;32mThe average of numbers is\033[0m\033[1;30m = \033[0m\033[1;39m%d\033[0m\n", average);

    return 0;
}

// Function to get input from user
int inputNumber(char *message) {
    int num;
    printf("\033[1;34m%s\033[0m", message);
    scanf("%d", &num);
    return num;
}

// Function to calculate sum
int calculateSum(int a, int b, int c) {
    return a + b + c;
}

// Function to calculate subtract
int calculateSubtract(int a, int b, int c) {
    return a - b - c;
}

// Function to calculate average
int calculateAverage(int sum) {
    return sum / 3;
}

