#include<stdio.h>

void main()
{
    int arr[10], i, size, sub=0;
    printf("How  many entry you want?<arr10>: ");
    scanf("%d",&size);

    printf("enter the %d no",size);

    for( i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
        sub -= arr[i];
    }
    printf("enter the subtraction : ");
    printf("%d", sub);

}