#include <stdio.h>

int main()
{
    char string[50];
    char *p;

    printf("Enter any string: ");
    fgets(string, 100, stdin);

    // Assigning the base address str[0] to pointer
    p=string;

    printf("The input string is: ");
    //'\0' is Null Terminator/ End of String
    while(*p!='\0')
        printf("%c",*p++);

    return 0;
}