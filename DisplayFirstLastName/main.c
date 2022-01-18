#include <stdio.h>
#include <stdlib.h>

int main()
{
    char firstname[20], lastname[20];
    printf("Enter First Name!\n");
    gets(firstname);
    //scanf("%s", firstname);
    printf("Enter Last Name!\n");
    gets(lastname);//'scanf("%s", &lastname);
    printf("Full Name is: %s %s\n", firstname, lastname);
    return 0;
}
