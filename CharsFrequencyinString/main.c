#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[1000], ch;
    int count =0;

    printf("Enter a Text ...");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to find its frequency ...");
    scanf("%c", &ch);

    for(int i=0; str[i]!='\0'; i++){
        if(ch==str[i])
            count++;
    }

    printf("Frequency of character [%c] is: %d times", ch, count);
    return 0;
}
