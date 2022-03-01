#include <stdio.h>

int BinarySearch(int array[], int start, int end, int element){
    while (start <= end){
        int middle = start + (end- start)/2;
        if (array[middle] < element)
            start = middle + 1;
        else if (array[middle] == element)
            return middle;
        else
            end = middle - 1;
    }
    return 1;
}
int main(){
    int array[10];
    
    int num;
    printf("Enter number of elements : ");
    scanf("%d",&num);

    for (int i=0; i<num; i++){
        printf("Enter element %d : ", i+1);
        scanf("%d",&array[i]);
    }

    int search;
    printf("Enter element to search : ");
    scanf("%d",&search);

    int result = BinarySearch(array, 0, num-1, search);
    if(result == 1 ) {
        printf("Element is not in the array ");
    }
    else {
        printf("Element found at index : %d",result);
    }
    return 0;
}