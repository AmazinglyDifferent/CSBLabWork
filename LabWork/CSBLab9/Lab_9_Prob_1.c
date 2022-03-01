#include <stdio.h>
#include <string.h>

int main(){
    char name[30];
    printf("Enter your name:");
    gets(name);
    
    for(int i=0; i<strlen(name); i++){
        printf("ASCII Value of %d character is: %d\n",i+1,name[i]);
    }
    return 0;
}
