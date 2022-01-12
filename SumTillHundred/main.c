#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n, sum=0.0;
    printf("Enter a list of numbers, or 0 to end input!");
    scanf("%f", &n);
    while(n!=0){
        sum+=n;
        scanf("%f", &n);
    }
    printf("Sum is %5.2f\n", sum);
    return 0;
}
