#include<stdio.h>
  
int main()
{
    int array[20],i,search,num;
    printf("Enter number of elements : ");
    scanf("%d",&num);
     
    printf("Enter array elements :");
    for(i=0;i<num;++i)
        scanf("%d",&array[i]);
     
    printf("Enter element to search:");
    scanf("%d",&search);
     
    for(i=0;i<num;++i){
        if(array[i]==search)
            break;
    } 
    if(i<num){
        printf("Element found at index %d",i);
    }
    else{
        printf("Element not found");
    }
  
    return 0;
}
