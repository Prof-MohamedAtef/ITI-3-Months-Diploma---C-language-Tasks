#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s1[100], s2[100], i;
    printf("Enter First string ...\n");
    fgets(s1, sizeof(s1),stdin);

    for(int i=0; s1[i] != '\0'; i++){
        s2[i]=s1[i];
    }

    s2[i]='\0';
    printf("\033[0;32m");
    printf("Copied string in s2 is: %s", s2);
    return 0;
}
