
//reverse array function in  pointer.

#include<stdio.h>

void reverse(int *, int);

void main()
{
  int arr[50], size;
  printf("enter size: ");
  scanf("%d", &size);


  for (int i = 0; i < size; i++)
  {
    printf("enter element for location arr[%d]: ", i);
    scanf("%d", &*(arr + i));
  }

  reverse(arr, size);
  for (int i = 0; i < size; i++)
  {
    printf("%d ", *(arr + i));
  }
  
}

void reverse(int *arr, int size)
{
  for (int i = 0, j = size - 1; i < j; i++, j--)
  {
    int temp = *(arr+i);
    *(arr+i) = *(arr+j );
    *(arr+j) = temp;    
  }
  
}