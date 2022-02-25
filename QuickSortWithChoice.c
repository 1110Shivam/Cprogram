#include <stdio.h>
#include <stdlib.h>
void swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int A_partition(int ar[], int low, int high)
{

    int pivot = ar[high],i = (low - 1),j;

    for (j = low; j < high; j++)
    {
        if (ar[j] <= pivot)
        {
            i++;
            swap(&ar[i], &ar[j]);
        }
    }
    swap(&ar[i + 1], &ar[high]);
    return (i + 1);
}

int D_partition(int ar[], int low, int high)
{

    int pivot = ar[high],i = (low - 1),j;

    for (j = low; j < high; j++)
    {
        if (ar[j] >= pivot)
        {
            i++;
            swap(&ar[i], &ar[j]);
        }
    }
    swap(&ar[i + 1], &ar[high]);
    return (i + 1);
}
void Ascending(int ar[], int low, int high)
{
    if (low < high)
    {
        int pi = A_partition(ar, low, high);
        Ascending(ar, low, pi - 1);
        Ascending(ar, pi + 1, high);
    }
}

void Descending(int ar[], int low, int high)
{
    if (low < high)
    {
        int pi = D_partition(ar, low, high);
        Descending(ar, low, pi - 1);
        Descending(ar, pi + 1, high);
    }
}

void printArray(int ar[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("%d  ", ar[i]);
    }
    printf("\n");
}

int main()
{
    int ar[20], size, i, ch;
    printf("Enter size of elements = ");
    scanf("%d", &size);

    printf("Enter %d integers\n", size);

    for (i = 0; i < size; i++)
    {
        scanf("%d", &ar[i]);
    }
    printf("Unsorted Array\n");
    printArray(ar, size);
    do
    {
        printf("\nPress 1:For Ascending Order\n");
        printf("Press 2:For Descending Order\n");
        printf("Press 3:For Exit\n");
        printf("Enter Your Choice\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            Ascending(ar, 0, size - 1);
            printf("Sorted Array In Ascending Order\n");
            printArray(ar, size);
            break;

        case 2:
            Descending(ar, 0, size - 1);
            printf("Sorted Array In Descending Order\n");
            printArray(ar, size);
            break;

        case 3:
            exit(0);
        default:
            printf("Enter Correct Choice");
            break;
        }
    } while (ch != 3);

    return 0;
}