#include<stdio.h>

void main()
{
    int arr[50], size;

    printf("enter size: ");
    scanf("%d", &size);

    for( int i = 0; i < size; i++ )
    {
        printf("enter a element you wants in arr[%d]", i );
        scanf( "%d", &arr[i] );
    }
    for( int j = 0; j < size; j++ )
    {
        printf("%d", arr[j] );
    }
}