#include <stdio.h>
#include <stdlib.h>

int main()
{



    int sumArray[3][4];
    int sumRows[3][4];

    for(int i=0; i< 3; i++){
        int cumSum=0;
        printf("\t[\t");
        for(int j=0; j<4; j++){
            cumSum+= sumArray[i][j];
            sumRows[i][j]=cumSum;
            printf("%d\t",sumRows[i][j]);
        }
        printf("\t]\n");
    }
    return 0;
}
