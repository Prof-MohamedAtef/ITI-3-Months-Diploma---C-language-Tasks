#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x, y, z;
    printf("Enter three numbers ...\n");
    scanf("%d%d%d", &x, &y, &z);

    printf("%d is the greatest ...", findTheGreatest(x, y, z));

    return 0;
}

int findTheGreatest(int num1, int num2, int num3){
    if(num1>num2){
        if(num1>num3){
            return num1;
        }else{
            return num3;
        }
    }else if(num2>num3){
        return num2;
    }else{
        return num3;
    }
}
