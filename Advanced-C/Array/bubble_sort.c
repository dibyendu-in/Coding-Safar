#include <stdio.h>

void main()
{
  int size;
  printf("Enter the size of array : ");
  scanf("%d", &size);
  int arr[size];
  printf("Enter the %d elements :\n", size);
  for (int i = 0; i < size; i++)
  {
    scanf("%d", &arr[i]);
  }

  for (int j = 0; j < size - 1; j++)
  {
    for (int k = 0; k < size - 1 - j; k++)
    {
      if (arr[k] < arr[k + 1])
      {
        int temp = arr[k];
        arr[k] = arr[k + 1];
        arr[k + 1] = temp;
      }
    }
  }
  printf("After shorting the array :\n");
  for (int i = 0; i < size; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}
