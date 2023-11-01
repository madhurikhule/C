#include<stdio.h>

void main()
{
    int arr[50], size, sum=0;

    printf("enter size: ");
    scanf("%d", &size);

    for( int i = 0; i < size; i++ )
    {
        printf("enter a element you wants in arr[%d]", i );
        scanf( "%d", &arr[i] );

        sum = sum + arr[i];
    
        
        
    } 
    for( int i=0; i<size; i++ )
    {
        
    }   printf("%d\n", sum);  
}    