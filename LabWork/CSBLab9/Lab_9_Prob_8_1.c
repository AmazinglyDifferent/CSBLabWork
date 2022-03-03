#include<stdio.h>

int linearsearch(int array[], int search, int num){
    int *p = array;
    int i;
    for(i=0;i<num;++i){
        if(*p==search)
            break;
        p++;
    } 
    if(i<num){
        printf("Element found at index %d",i);
        return i;
    }
    else{
        return -1;
    }
}

int main()
{   
    int num;
    printf("Enter number of elements :\n");
    scanf("%d",&num);

    int array[20],search;
    
    printf("Enter array elements :\n");
    for(int i=0;i<num;++i)
        scanf("%d",&array[i]);
     
    printf("Enter element to search:\n");
    scanf("%d",&search);
    
    linearsearch(array,search,num); 
    
    return 0;
}
