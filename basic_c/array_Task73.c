//Declare two arrays, accept the content for first array and copy the contents of first array to second array and_
//print the second array. [Array Copy]

#include<stdio.h>

void main()
{
    int arr[10], i, size, copy[10];
    printf("enter how many entry you want?<arr 10>: ");
    scanf("%d",&size);
    printf("Enter the %d no you want: ",size);

    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
        for (i=0; i<size; i++)
       {
          copy[i] = arr[i];
       
    }
    printf("the copy array: ");

    for(i=0; i<size; i++)
    {
        printf("%d ", copy[i]);
    }
    
}
