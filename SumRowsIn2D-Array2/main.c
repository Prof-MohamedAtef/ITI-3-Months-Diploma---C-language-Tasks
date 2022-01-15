#include <stdio.h>
#include <stdlib.h>

int main()
{
    int degree[3][4];
    int i, j;
    int sum=0;

    for(int i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("\n enter degree of student no. %d in subject %d: ", i+1, j+1);
            scanf("%d", &degree[i][j]);
        }
    }

    for(int i=0; i<3; i++){
        for(j=0; j<4; j++){
            printf("\n Student no. %d degree in subject no. %d is %d", i+1, j+1, degree[i][j]);
        }
    }

    for(int i=0; i<3; i++){
        sum=0;
        for(j=0; j<4; j++){
            sum+=degree[i][j];
        }

        printf("\n sum of degrees of student no. %d is %d", i+1, sum);
    }
    return 0;
}
