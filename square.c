#include <stdio.h>

int main()
{
    double a, squareRoot;


    printf("\033[1;36mEnter a number: \033[0m");
    scanf("%lf", &a);

    squareRoot = sqrt(a);


    printf("\033[1;34mSquare root of %.2lf = %.2lf\n\033[0m", a, squareRoot);

    return 0;
}
