#include<stdio.h>

void main()
{
    int arr[10], i, size, min;

    printf("enter how many no you wants to enter?<arr 10>:");
    scanf("%d", &size);
    printf("enter the no:");
    for(i=0; i<size; i++);
    {
        scanf("%d", &arr[i]);
        if(arr[i]>min)
        {
            min=arr[i];
        }

    }printf("the min no is : ");
    for(i=0; i<size; i++)
    {

    }
    printf("%d", min);
}