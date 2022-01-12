#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    printf("Which greeting should be used in the morning ?\n1.Good Morning\n2.Good Evening\n3.Bye");
    scanf("%d", &choice);

    switch(choice){
        case 1:
            printf("Good Morning is your selection");
            break;
        case 2:
            printf("Good Evening is your selection");
            break;
        case 3:
            printf("Bye is your selection");
            break;
    }
    return 0;
}
