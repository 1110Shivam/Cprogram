#include <stdio.h>
#include <stdlib.h>

void Ascending(int ar[], int size)
{
    int i, j, temp;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (ar[j] > ar[j + 1])
            {
                temp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = temp;
            }
        }
    }
    printf("Sorted Array In Ascending Order\n");
    for (i = 0; i < size; i++)
    {
        printf("%d  ", ar[i]);
    }
    printf("\n");
}
void Descending(int ar[], int size)
{
    int i, j, temp;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (ar[j] < ar[j + 1])
            {
                temp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = temp;
            }
        }
    }
    printf("Sorted Array In Descending Order\n");
    for (i = 0; i < size; i++)
    {
        printf("%d  ", ar[i]);
    }
    printf("\n");
}

int main()
{
    int ar[20], size, i,ch;

    printf("Enter the size of elements = ");
    scanf("%d", &size);

    printf("Enter %d integers\n", size);

    for (i = 0; i < size; i++)
        scanf("%d", &ar[i]);

    do
    {
        printf("\nPress 1:For Ascending Order\n");
        printf("Press 2:For Descending Order\n");
        printf("Press 3:For Exit\n");
        printf("Enter Your Choice\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:Ascending(ar, size);
            break;

        case 2:Descending(ar, size);
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