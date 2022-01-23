#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <MyLibrary.h>

int main()
{

    int x, y, answer;
    printf("Set Coordinates to initiate message. Please enter X & Y values:");
    gotoxy(x,y);
    refineInput();
    scanf("%d", &answer);
    checkInput(answer, x, y);

    return 0;
}

void checkInput(int answer, int x, int y){
    char ch_agree;
    while(answer>0 && answer ==1 || answer==2||answer == -1){
            switch(answer){
                case 1:
                    printf("Yes, enter new coordinates!");
                    gotoxy(x,y);
                    printf("Do you want to clear screen ?\n1. for Agree.\n");
                    //ch_agree=getche();
                    scanf("%d", answer);
                    if(answer==1){
                        clrscr();
                        printf("delete");
                    }
                    exit(0);
                    break;
                    return;
                case 2:
                    printf("You Entered wrong value. Refine your input please!");
                    gotoxy(x,y);
                    answer=0;
                    break;
                case -1:
                    printf("Application will exit now! Press Enter Key...");
                    exit(0);
                    break;
            }
        }

    }

void gotoxy(int x, int y){
    scanf("%d %d", &x, &y);
    printf("%c[%d;%df", 0x1B,y,x);
}


void refineInput(){
    printf("Do you want to change coordinates of the cursor ?\n.1 indicate agree.\n.2 indicate refuse.\n[-1] to close the application.");
}

void clrscr(){
    system("cls");
}
