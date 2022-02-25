#include <stdio.h>

int main()
{
  int ar[20], size, i, j, temp;

  printf("Enter the size of elements = ");
  scanf("%d", &size);

  printf("Enter %d integers\n", size);

  for (i = 0; i < size; i++)
    scanf("%d", &ar[i]);

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

  printf("Sorted List In Ascending Order\n");

  for (i = 0; i < size; i++)
    printf(" %d ", ar[i]);

  return 0;
}