#include <stdio.h>
int main ()
{
    int a, b, c, mini;
    printf("Enter the first number");
    scanf("%d", &a);
    printf("Enter the second number");
    scanf("%d", &b);
    printf("Enter the third number");
    scanf("%d", &c);
    if(a<=b && a<=c)
    {
        mini = a;
    }
    else if (b<=a && b<=c)
    {
        mini = b;
    } else {
        mini = c;
    }


    printf("the minimum number is %d\n",mini);
    return 0;
}
