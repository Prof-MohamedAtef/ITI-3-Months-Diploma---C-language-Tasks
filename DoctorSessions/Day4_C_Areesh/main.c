#include <stdio.h>
#include <stdlib.h>
#include <MyLibrary.h>

int main()
{
    /*
    char ch;

    printf("\n Enter Char: ");
    scanf("%c", &ch);
    printf("\n U Entered Char: %c ", ch);

    printf("\n Enter Char: ");
    _flushall();  ///Empty Buffer

    scanf("%c", &ch);
    printf("\n U Entered Char: %c", ch);
*/
/*
    char ch;

    printf("\n Enter Char: ");
    ch = getche();
    printf("\n U Entered Char: %c ", ch);

    printf("\n Enter Char: ");
    ch = getche();
    printf("\n U Entered Char: %c", ch);
*/

/*
    char ch;
    int WordCount = 0;
    int CharCount = 0;

    printf("\n Enter a Sentence :");
    ///Abc DE FG 'Enter'
    do    ///Abc      charCount= 7    WordCount= 2
    {
        ch = getche();
        CharCount++;

        if(ch == ' ') ///if(ch==32)
        {
            WordCount++;
            CharCount--;
        }


    }while(ch != 13);  // 13 AsCII of Enter

    WordCount++;
    CharCount--;

    printf("\n Your Sentence have %d Word and %d Character", WordCount, CharCount);
*/

int i;
    char Arr[10];

    //Arr[0] = 'A';
    //Arr[1] = 'L';
    //Arr[2] = 'I';

    //printf("Enter a String :" );
    //for(i=0; i<10; i++)
    //{
      //  scanf("%c", &Arr[i]);
    //}

    //printf("String is :" );
    //for(i=0; i<10; i++)
    //{
      //  printf("%c", Arr[i]);
    //}

    /*
    printf("Enter a String :" );
    scanf("%s", Arr);

    printf("String is :" );
    printf("%s", Arr);
*/
/*
    printf("Enter a String :" );
    gets(Arr);

    printf("String is :" );
    printf("Your Name is : %s", Arr);
    ///puts("Your Name is : ");
    ///puts(Arr);
*/

/*
 char Str[10];
    Str[0] = 'A';
    Str[1] = 'L';
    Str[2] = 'I';
    Str[3] = '\0';
printf("\nStr = %s", Str);

char str1[10] = {'A', 'L', 'I', '\0'};
printf("\nStr1 = %s", str1);

char str2[10] = "Ahmed";
printf("\nStr2 = %s", str2);

char str3[10];
gets(str3);
printf("\nStr3 = %s", str3);


*/

/*

char FName[10];
char LName[10];
char FullName[20];

printf("\n Enter First Name: ");
gets(FName);

printf("\n Enter Last Name: ");
gets(LName);

//FullName = FName + LName;

strcpy(FullName, FName);
//printf("Full Name is : %s", FullName);

strcat(FullName, " ");
strcat(FullName, LName);
printf("Full Name is : %s", FullName);


*/
/*
char Str1[10] = "Ali";
char Str2[10] = "ali";

/// Compare Result:
///+ve : Str1 > Str2
///-ve : Str1 < Str2
/// 0  : Str1 == Str2

///int CompResult = strcmp(Str1, Str2);
int CompResult = strcmpi(Str1, Str2);

if(CompResult > 0)
    printf("\n Str1 > Str2 ");
else if(CompResult < 0)
    printf("\n Str1 < Str2 ");
else if(CompResult == 0)
    printf("\n Str1 == Str2 ");

*/

/*
char Name[10];
printf("\n Enter Name: ");
gets(Name);

int len = strlen(Name);
printf("\n String Length = %d", len);
*/

/*
char ch = tolower('A');
printf("\n char = %c", ch);

char ch2 = toupper('b');
printf("\n char = %c", ch2);

char Arr6[10];
printf("\n Enter Arr: ");
gets(Arr);

clrscr();
printf("\n Hello After Clear Screen ");

*/


char ch;

do
{
    clrscr();

    printf("\n A- Good Morning");
    printf("\n B- Good Evining");
    printf("\n C- Good Bye");

    printf("\n Enter Ur Choice: ");
    ch = getche();

    switch(ch)
    {
    case 'A':
    case 'a':
        clrscr();
        gotoxy(30, 10);
        printf("Good Morning");
        getche();
        break;

    case 'B':
    case 'b':
        clrscr();
        gotoxy(30, 10);
        printf("Good Evining");
        getche();
        break;

    case 'C':
    case 'c':
        clrscr();
        gotoxy(30, 10);
        printf("Good Bye");
        getche();
        break;

    default:
        clrscr();
        printf("\n Wrong Choice");
        break;
    }

}
while(ch != 27);

    return 0;
}
