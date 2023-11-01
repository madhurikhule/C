//Declare an array of size 50; ask user how many numbers he/she wants to enter in the array. Accept the array and print it.

#include<stdio.h>

void main()
{
    int arr[50], i, size;

    printf("how many no you wants to enter?<arr 50>:");
    scanf("%d", &size);

    printf("Enter %d no:",size);

    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);

    }
        printf("the array are:");
    
    for(i=0; i<size;  i++)
    {
        printf("%d", arr[i]);
    }
}