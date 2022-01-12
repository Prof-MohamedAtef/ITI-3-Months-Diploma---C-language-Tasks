#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dividend, divisor, quotient, remainder;
    printf("Enter division End: ");
    scanf("%d", &dividend);
    printf("Enter Divisor: ");
    scanf("%d", &divisor);

    // Compute Quotient
    quotient=dividend/divisor;

    // Compute Remainder
    remainder=dividend % divisor;

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d", remainder);


    return 0;
}
