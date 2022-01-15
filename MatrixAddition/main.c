#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, c, d, first[5][5], second[5][5], sum[5][5];

    printf("Enter the number of rows and columns in the matrix\n");
    scanf("%d%d", &m, &n);

    printf("Enter the elements of the first Matrix\n");

    for(int c=0; c<m; c++)
        for(int d=0; d<n; d++)
            scanf("%d", &first[c][d]);

    printf("Enter the elements of the second Matrix\n");

    for(c=0; c<m; c++)
        for(d=0; d<n; d++)
            scanf("%d", &second[c][d]);

    printf("Sum of entered matrices:-\n");

    for(c=0; c<m; c++)
        for(d=0; d<n; d++){
            sum[c][d]=first[c][d]+second[c][d];
            printf("%d\t", sum[c][d]);
        }
        printf("\n");

    return 0;
}
