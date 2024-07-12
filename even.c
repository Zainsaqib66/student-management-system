#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number to check even or odd");

    scanf("%d",&number);
    if (number % 2==0)
    {
        printf("The number %d is even",number);

    }
    else
    {
        printf("the number %d is odd",number);
    }


}
