#include <stdio.h>

int main()
{
    int a, i;
    unsigned long long factorial = 1;
    printf("Enter a positive value");
    scanf("%d", &a);
    if (a<0)
    {
        printf("Error! please enter a positive value");
    }
    else
    {
        for (i=1; i <=a; i++)
        {
            factorial  *=i;
        }
        printf("Factorial of %d is %llu",a, factorial);
    }
    return 0;
}
