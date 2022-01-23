#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[200];
    int count =0, i;

    printf("Enter your text!\n");
    scanf("%[^\n]s", s);

    for(int i=0; s[i] != '\0'; i++){
        if(s[i]==' ' && s[i+1] != ' ')
            count ++;
    }

    printf("Number of words in given Text are: %d\n", count +1);
    return 0;
}
