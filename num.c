#include <stdio.h>
int main ()
{
    int a, b, c, max;
    printf("Enter the first number");
    scanf("%d", &a);
    printf("Enter the second number");
    scanf("%d", &b);
    printf("Enter the third number");
    scanf("%d", &c);
    if(a>=b && a>=c)
    {
        max = a;
    }
    else if (b>=a && b>=c)
    {
        max = b;
    } else {
        max = c;
    }
    printf("the maximum number is %d\n",max);
    return 0;
}
