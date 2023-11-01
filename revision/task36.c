/*Accept an array from user and display it using functions*/

#include<stdio.h>
void display_arr(int [], int);
void main()
{
    int arr[10], size;

    printf("Enter size: ");
    scanf("%d", &size);
    for( int i = 0; i < size; i++ )
    {
        printf("Enter element arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    display_arr(arr, size);

}

void display_arr(int a[], int s)
{
    printf("the array is: ");
    for( int i = 0; i < s; i++ )
    {
        printf(" %d",a[i]);
    }


}
