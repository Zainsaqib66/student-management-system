#include <stdio.h>

int main()
{
    int num1, num2, sum, division, multiplication;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    printf("Sum: %d\n", sum);

    multiplication = num1 * num2;
    printf("Multiplication: %d\n", multiplication);

    division = num1 / num2;
    printf("Division: %d\n", division);

    return 0;
}

