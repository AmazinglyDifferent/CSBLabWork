#include <stdio.h>
#include <string.h>

int main(){

    char str[100];
    printf("Enter the string: ");
    scanf("%[^\n]s", &str);

    char pattern[20];
    printf("Enter the pattern: ");
    scanf("%s", &pattern);

    int count = 0;

    char *s = str;
    while (*s != '\0') {
        char *p = pattern;
        char *k = s;
        while (*p != '\0') {
            if (*p != *k) {
                break;
            }
            p++;
            k++;
        }
        if (*p == '\0') {
            count++;
        }
        s++;
    }

    printf("PATTERN FOUND %d Times\n", count);
    
    return 0;
}
