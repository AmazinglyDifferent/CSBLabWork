#include <stdio.h>
#include <string.h>

int main(){
    
    char string[30];
    int charcount= 0;
    int wordcount = 0;
    int linecount = 0;

    printf("Enter the string:");
    scanf("%[^*]s", string);
    printf("You entered: %s\n",string);

    char *p = string;
    while(*p != '\0'){
        if(*p != ' ' && *p != '\n' ){  
            charcount++;  
        }
        if(*p == ' ' || *p == '\n'){ 
            wordcount++;  
        }
        if(*p == '\n'){
            linecount++;  
        }
        p++;
    }
    
    printf("Number of Characters: %d\n",charcount);
    printf("Number of Words: %d\n",wordcount);
    printf("Number of Lines: %d\n",linecount);

    return 0;
}
