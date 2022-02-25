#include <stdio.h>

void swap(int *num1, int *num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int partition(int ar[], int low, int high){

    int pivot = ar[high],i = (low - 1),j;

    for (j = low; j < high; j++){
        if (ar[j] <= pivot){
            i++;
            swap(&ar[i], &ar[j]);
        }
    }
    swap(&ar[i + 1], &ar[high]);
    return (i + 1);
}

void quickSort(int ar[], int low, int high){
    if (low < high){
        int pi = partition(ar, low, high);
        quickSort(ar, low, pi - 1);
        quickSort(ar, pi + 1, high);
    }
}

void printArray(int ar[], int size){
    for (int i = 0; i < size; ++i)
        printf("%d  ", ar[i]);
    
    printf("\n");
}

int main(){
    int ar[20], size, i;
    printf("Enter size of elements = ");
    scanf("%d", &size);

    printf("Enter %d integers\n", size);

    for (i = 0; i < size; i++)
        scanf("%d", &ar[i]);
    
    printf("Unsorted Array\n");
    printArray(ar, size);

    quickSort(ar, 0, size - 1);

    printf("Sorted Array In Ascending Order\n");
    printArray(ar, size);
}