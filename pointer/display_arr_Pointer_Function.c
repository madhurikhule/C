// Array to pointer .
// Accept an array from user and display it using functions.

#include<stdio.h>
void display_arr( int*, int);
void main()
{
    int arr[10], size;

    printf("enter size: ");
    scanf("%d", &size);

    for( int i = 0; i < size; i++ )
    {
        printf("Enter element in arr[%d]", i);
        scanf("%d", &arr[i]);
    }
    display_arr(arr, size);

}

void display_arr( int *a, int s)
{
    printf("The Array is: ");
    for( int j = 0; j < s; j++ )
    {
        printf( "%d", *(a + j) );
    }

}