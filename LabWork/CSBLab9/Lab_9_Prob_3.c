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
    for(int i = 0; i < strlen(string); i++) {  
        if(string[i] != ' ' || string[i] != '\n' )  
            charcount++;  
    }
    for(int i = 0; i < strlen(string); i++) {  
        if(string[i] == ' ' || string[i] == '\n')  
            wordcount++;  
    }
    for(int i = 0; i < strlen(string); i++) {  
        if(string[i] == '\n')  
            linecount++;  
    } 

    printf("Number of Characters: %d\n",charcount);
    printf("Number of Words: %d\n",wordcount);
    printf("Number of Lines: %d\n",linecount);
    return 0;
}