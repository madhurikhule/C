//Accept an array from user and calculate and print the sum of array elements.


#include<stdio.h>
void sum_arr( int* , int );
void main()
{
    int arr[30], size ;

    printf("Enter size of array: ");
    scanf("%d" , &size);

    for( int i = 0; i < size; i++ )
    {
        printf(" Enter a element in arr[%d]", i);
        scanf("%d", &arr[i]);
    }

    sum_arr( arr, size );
}

void sum_arr(int *a, int s)
{
    int sum = 0;
    for ( int j = 0; j < s; j++ )
    {
        sum = sum + *(a + j);
    }
    printf(" sum of array : %d ", sum);

    
}