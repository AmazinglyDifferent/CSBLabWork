#include <stdio.h>

int main(){
    char string[30];
    printf("Enter the string:");
    scanf("%[^~]s", string);
    printf("%s\n",string);
    return 0;
}