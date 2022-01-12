#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NumOne, NumTwo, SelectedOperation;
    printf("Select from the following 4 mathmatical operations, but first please enter 2 numbers");
    scanf("%d%d", &NumOne, &NumTwo);
/*    scanf("%d", NumTwo);*/
    printf("\n please choose from the following operations:\n.Sum Two Numbers Operation\n.Subtract Two Numbers Operation\n.Multiply Two Numbers Operation\n.Divide Two Numbers Operation");
    scanf("%d",&SelectedOperation);
    if(SelectedOperation==1){
        printf("Result of Sum is: %d", NumOne+NumTwo);
    }else if(SelectedOperation==2){
        printf("Result of Subtract is: %d", NumOne - NumTwo);
    }else if(SelectedOperation==3){
        printf("Result of Multiplication is: %d", NumOne*NumTwo);
    }else if(SelectedOperation==4){
        printf("Result of Division is: %d", NumOne/NumTwo);
    }

    return 0;
}

