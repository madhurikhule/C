
#include<stdio.h>
#include<stdlib.h>

void main()
{
    int i;
    int *arr;
    arr = (int *) malloc(5 * sizeof(int) );
    for( i = 0; i < 5; i++ )
    {
        printf("enter element: ");
        scanf("%d", *(arr + i));
    }

        printf(" %d", *(arr + i));
    

   
}