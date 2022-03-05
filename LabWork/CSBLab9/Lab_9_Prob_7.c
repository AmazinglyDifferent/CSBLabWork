#include <stdio.h>

void printArray(int arr[], int size)
{
    printf("Sorted array is : \n");
    for (int i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void bubbleSort(int arr[], int size)
{
   for (int i = 0; i < size-1; i++){      
       for (int j = 0; j < size-i-1; j++){ 
            if (arr[j] > arr[j+1]){
                int *add1 = &arr[j];
                int *add2 = &arr[j+1];
                int temp = *add1;
                *add1 = *add2;
                *add2 = temp;
           }
        }
   }
   printf("Minimum Marks are : %d\n",arr[0]);
   printf("Maximum Marks are : %d\n",arr[4]);
}

int main()
{
    int data[] = {46, 40, 50, 43, 35};
    int size = sizeof(data)/sizeof(data[0]);

    bubbleSort(data, size);
    printArray(data, size);
    
    return 0;
}
