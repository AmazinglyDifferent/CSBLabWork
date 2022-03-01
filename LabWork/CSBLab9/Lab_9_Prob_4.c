#include <stdio.h>

int main()
{
    char string[50];
    
    printf("Enter any string: ");
    fgets(string, 100, stdin);
   
    char *p=string;

    printf("The input string is: ");
   
    while(*p!='\0'){
        printf("%c",*p++); //printing and then incrementing
    }
    
    return 0;
}
