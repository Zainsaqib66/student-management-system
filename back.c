#include <stdio.h>

int main()
{
    int num1, num2, sum, multiplication, subtract;
    float division;

    printf("\033[1;36mEnter first number:\033[0m ");
    scanf("%d", &num1);
    printf("\033[1;36mEnter second number:\033[0m ");
    scanf("%d", &num2);

    sum = num1 + num2;
    printf("\033[1;32mSum:\033[0m \033[1;33m%d\n\033[0m", sum);

    multiplication = num1 * num2;
    printf("\033[1;32mMultiplication:\033[0m \033[1;33m%d\n\033[1", multiplication);

    division = (float)num1 / num2;
    printf("\033[1;32mDivision:\033[0m \033[1;33m%.2f\n\033[0m", division);

    subtract = num1 - num2;
    printf("\033[1;32mSubtract:\033[0m \033[1;33m%d\n\033[0m", subtract);

    return 0;
}
