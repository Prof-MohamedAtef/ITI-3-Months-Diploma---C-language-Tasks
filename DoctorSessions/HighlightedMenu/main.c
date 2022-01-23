#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <MyLibrary.h>

int main()
{

    int i, cur=0, flag = 0; ///Quit Flag
    char ch;
    char Menu[3][5] = {"New", "Save", "Exit"};

    do
    {

    textattr(0X07);  ///Normal Pen
    clrscr();

    for(i=0; i<3; i++)
    {
        gotoxy(30, 7+i*3);
        if( i == cur )
            textattr(0X70);  ///Highlighted Pen
        else
            textattr(0X07);  ///Normal Pen

        printf("%s", Menu[i]);
    }

    ch = getche();

    switch(ch)
    {
        case -32: ///Extended Key
            ch = getche();
            switch(ch)
            {
                case 72: ///Up
                    cur--;
                    if(cur < 0)
                        cur = 2;
                break;

                case 80: ///Down
                    cur++;
                    if(cur > 2)
                        cur = 0;
                break;

                case 71: ///Home
                    cur=0;
                break;

                case 79: ///End
                    cur=2;
                break;
            }
        break;

        case 9: ///Tab
            cur++;
            if(cur > 2)
                cur = 0;
        break;

        case 13: ///Enter

            if(cur == 0)  /// New
            {
                clrscr();
                printf("\n This is New page...");
                getche();
            }
            else if(cur == 1)  /// Save
            {
                clrscr();
                printf("\n This is Save page...");
                getche();
            }
            else  ///Exit
            {
                flag = 1;
            }
        break;

        case 27: ///Esc
            flag = 1;
        break;
    }


    }while(flag==0);  ///
    /*
    ///Extended Or Normal Keys:
    char ch;
    printf("\n Press Any Key: ");

    ch = getche();

    if(ch != -32)
    {
        printf("\n You pressed Normal Key %c , its Ascii = %d", ch , ch);
    }
    else
    {
        ch = getche();
        printf("\n You pressed Extended Key, its Ascii = %d", ch);
    }

*/


    return 0;
}
