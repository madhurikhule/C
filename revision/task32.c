//Accept an array from user and print the maximum number in an array.

#include<stdio.h>
int max_num(int [], int);
void main()
{
    int arr[100], size;
   
    printf("enter size: ");
    scanf( "%d", &size );

    for( int i = 0; i < size; i++ )
    {
        printf("Enter no of arr[%d]", i);
        scanf("%d", &arr[i]);
    }
    
    printf("maximun no is: %d",max_num(arr, size));
    
}

int max_num(int arr[], int size)
{
    int max_num = arr[0];
    for( int i = 0; i <size; i++ )
    {
        if(arr[i] > max_num)
        {
            max_num = arr[i];    
        }
    }
    return max_num;
   
}