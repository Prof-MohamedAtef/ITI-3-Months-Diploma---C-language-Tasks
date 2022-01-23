#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n=0;
    int magicSquare[n][n];


    printf("Enter value of dimensions required for the Magix Box!");
    scanf("%d", &n);

    memset(magicSquare, 0, sizeof(magicSquare));

    int i=n/2;
    int j=n-1;

    for(int num=1; num<=n*n;){
        if(i==-1 && j==n){
            j=n-2;
            i=0;
        }else{
            if(j==n)
                j=0;

            if(j<0)
                i=n-1;
        }

        if(magicSquare[i][j])
        {
            j-=2;
            i++;
            continue;
        }
        else
            magicSquare[i][j] = num++;

        j++;
        i--;
    }

    // print magic square
    printf("The Magic Square for n= %d:\nSum of "
    "each row or column %d :\n\n", n, n*(n*n+1) / 2);

    for(i =0; i<n; i++){
        for(j=0; j<n; j++)
            printf("%3d ", magicSquare[i][j]);
        printf("\n");
    }
    return 0;
}
