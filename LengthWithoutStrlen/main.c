#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[1000];
    printf("Ener a string ...");
    fgets(s, sizeof(s), stdin);
    printf("%i\n", length_of_string(s));
    return 0;
}
int length_of_string(char *p){
        int count=0;
        while(p[count]!='\0'){
            count++;
        }
        return count;
    }
