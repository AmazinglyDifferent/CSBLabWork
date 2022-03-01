#include <stdio.h>

int main(){
    int array[5];
    for (int i=0; i<5; i++){
        printf("Enter %d element:",i+1);
        scanf("%d",&array[i]);
    }
    
    int *p;
    p=array;
    int sum=0;
    
    while(*p!='\0'){
        sum= sum + *p;
        p++;
    }
    
    printf("Sum of all elements are: %d\n",sum);
    return 0;
}
