#include <stdio.h>

int BinarySearch(int array[], int start, int end, int search){
    while (start <= end){

        int middle = start + (end- start)/2;
        int *p = &array[middle];        
        
        if (*p == search){
            printf("Element found at index : %d\n",middle);
            return middle;
        }
        else if (*p < search)
            start = middle + 1;
        else{
            end = middle - 1;
        }
    }
    printf("Element is not in the array ");
    return -1;
}

int main(){
    int array[5];
    
    int num;
    printf("Enter number of elements : \n");
    scanf("%d",&num);

    printf("Enter array elements :\n");
    for (int i=0; i<num; i++){
        scanf("%d",&array[i]);
    }

    int search;
    printf("Enter element to search : \n");
    scanf("%d",&search);

    BinarySearch(array, 0, num-1, search);
    
    return 0;
}
