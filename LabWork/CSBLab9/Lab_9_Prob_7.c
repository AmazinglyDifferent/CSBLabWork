#include <stdio.h>

void printArr(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d  ", array[i]);
    }
    printf("\n");
}

void bubbleSort(int array[], int size) {
    for (int j = 0; j < size - 1; j++) {
        for (int i = 0; i < size - j - 1; i++) {
            if (array[i] > array[i + 1]) {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}

int main() {
    int s;
    int data[s];
  
    printf("Enter size of an array:");
    scanf("%d",&s);
    for(int i=0; i<s; i++){
        printf("Enter data[%d]:",i+1);
        scanf("%d",&data[i]);
    }

    bubbleSort(data, s);
    printf("Sorted Array is:\n");
    printArr(data, s);
    return 0;
}