#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, result;
    printf("which numbers will you add ? please specify your two numbers to add.");
    scanf("%d%d", &num1, &num2);
    result=num1+num2;
    printf("result is: %d", result);
    return 0;
}
