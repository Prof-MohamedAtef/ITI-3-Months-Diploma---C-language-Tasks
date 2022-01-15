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
            printf("\n Student no. %d degree in subject no. %d is %d", i+1, j+1, degree[i][j]);
        }
    }

    for(int i=0; i<students; i++){
        sum=0;
        for(int j=0; j<subjects; j++){
            sum+=degree[i][j];
        }
        average=sum/subjects;
        printf("\033[0;32m");
        printf("\n sum of degrees of student no. %d is %d", i+1, sum);
        printf("\033[0;31m");
        printf("\n average of degrees for student no. %d is %d", i+1, average);
    }

    return 0;
}
