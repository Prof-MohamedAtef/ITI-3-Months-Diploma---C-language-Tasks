#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char* colors[3]={"33m", "32m", "35m"};
    char color_destination[]= "\033[0;";
    int students=3;
    int subjects=4;
    int degree [students][subjects];
    int i,j;
    int sum =0;
    int average=0;

    for(int i=0;i<students;i++){
        for(j=0; j<subjects; j++){
            printf("\n enter degree of student no. %d in subject %d: ", i+1, j+1);
            scanf("%d", &degree[i][j]);
        }
    }

    for(int i=0; i<students; i++){
        strcat(color_destination,colors[i]);
        printf(color_destination);
        for(int j=0; j<subjects; j++){
            printf("\n Student no. %d degree in subject no. %d is %d\n", i+1, j+1, degree[i][j]);
        }
    }

    for(int i=0; i<students; i++){
        for(j=0; j<subjects; j++){
            printf("%d ",degree[i][j]);
            if(j==3){
                printf("\n");
            }
        }
    }


    for(int i=0; i<subjects; i++){
        sum=0;

        for(j=0; j< students; j++){
            sum+=degree[j][i];
            average=0;
            average=sum/students;
        }
        printf("\033[0;32m]");
        printf("\n sum of degrees of column no. %d is %d", i+1, sum);
        printf("\033[0;31m");
        printf("\n average of degrees for column no. %d  is %d", i+1, average);
    }
    return 0;
}
