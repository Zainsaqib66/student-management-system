#include <stdio.h>
int main ()
{
    int a, b, c, sum, subtract, average;
    printf("\033[1;34m Enter first number :\033[0m");
    scanf("%d",&a);

    printf("\033[1;34m Enter second number :\033[0m");
    scanf("%d",&b);

    printf("\033[1;34m Enter third number :\033[0m");
    scanf("%d",&c);

    sum = a+b+c;
    printf("\033[1;32mThe sum of numbers is\033[0m \033[1;30m=\033[0m\033[1;39m %d\033[0m\n", sum);
    subtract = a-b-c;
     printf("\033[1;32mThe subtract of numbers is\033[0m\033[1;30m = \033[0m\033[1;39m%d\033[0m\n", subtract);
    average = sum/3;
    printf("\033[1;32mThe average of numbers is\033[0m\033[1;30m = \033[0m\033[1;39m%d\033[0m\n", average);
    return 0;
}
