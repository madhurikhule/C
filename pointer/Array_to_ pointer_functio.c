// array to pointer.

#include<stdio.h>
void display( int*, int );
void main()
{
    int arr[50], i, size;

    printf("Enter size: ");
    scanf("%d", &size);
    for( i=0; i<size; i++ )
    {
        printf("Accept element in arr[i]", i);
        scanf("%d", arr[i]);

       
    } display(arr, size);

}

void display(int *a, int s)
{
    int i;
    printf("\nthe array is");

    for( i = 0; i < s; i++ )
    {
        printf("\n%d", *(a+i));
    }
}