#include <stdio.h>

int main() {
    int dividend, divisor;
    int quotient = 0, remainder;

    // User se dividend aur divisor input lene ka kehna
    printf("Enter the dividend: ");
    scanf("%d", &dividend);

    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    remainder = dividend; // Remainder ko initially dividend ke equal set karte hain

    while (remainder >= divisor) {
        quotient++;
        remainder -= divisor;
    }

    // Quotient aur remainder ko print karna
    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d\n", remainder);

    return 0;
}
