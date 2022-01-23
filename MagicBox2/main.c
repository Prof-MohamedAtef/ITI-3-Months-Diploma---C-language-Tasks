#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    printf("Enter Size of the matrix ... \n");
    scanf("%d", &size);

    int matrix[size][size];

    printf("Enter matrix numbers (one by one)... \n");
    for(int i =0;i <size; i++){
        for(int j=0; j<size; j++){
            printf("for position %d%d\n", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

   printf("\n\nYour Matrix ...\n");
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    int sum=0;

    //diagonals

    for(int i=0; i<size; i++)
        sum+= matrix[i][i];

    int SumAux=0;int j=0;j--;j=size-1;
    for(int i=0;  i<size; i++ )
        SumAux+=matrix[j][i];

    if(sum!=SumAux){
        printf("Not a magic Square ...");
        return 0;
    }

    // rows and cols

    for(int i=0; i<size; i++){
        int sumRow=0;
        int sumCol=0;
        for(j=0; j<size; j++){
            sumRow+=matrix[i][j];
            sumCol+=matrix[j][i];
        }

        if(sum!=sumRow){
            printf("Not a Magic Square");
            return 0;
        }

        if(sum!=sumCol){
            printf("Not a Magic Sqaure");
            return 0;
        }
    }

    printf("Is a Magic Square with sum = %d", sum);
    return 0;
}
