#include <stdio.h>
int main ()
{
    float num1, num2, result = 0 ;
    char operator ;

    printf ("Enter the first number :");
    scanf ("%f", &num1);

    printf ("Enter the second number :");
    scanf ("%f", &num2);

    printf ("choose and operator (* , \,+ , -)");
    scanf ("%c", &operator );

    switch (operator )
    {


    case '-':
        result = num1 - num2 ;
        printf ("The result of the number is %.2f :" result);
        break;

        case '+':
result = num1 + num2;
            printf ("The result of the numbers is %.2f :" result );
            break;

        case '*':
            result = num1 * num2 ;
            printf ("The result of the numbers is %.2f", result );

        break ;
        default ;
        printf ("Invalid operator ");
        return 0;
    }

}
