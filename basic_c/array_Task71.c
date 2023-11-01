//Accept an array from user and print the maximum number in an array.

#include<stdio.h>

void main()
{
    int arr[10], i, size, max;

    printf("how many numbers you want?<arr10>:");
    scanf("%d", &size);

    printf("enter the maximum %d no : ",size);

    for(i=0; i<size; i++)
    {
         scanf("%d", &arr[i]);
         if( arr[i] > max )
        {
            max=arr[i];
        }
    }
      printf("the maximum no is : ");


      for(i=0; i<size; i++)
       {
          
       }
       printf("%d",max);
}