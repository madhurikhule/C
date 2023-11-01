//Accept an array from user and display it using functions.

#include<stdio.h>
void display(int [], int );
void main ()
{
    int arr[10], size, i;
    printf("Enter the size of array you want?<arr 10>: ");
    scanf("%d", &size);
    printf("enter the %d no ", size);

    for(i=0;  i<size; i++ )
    {
        scanf("%d", &arr[i]);
    }
    display ( arr, size );

}
void display (int a[], int s)
{
    int i;
    printf("The Array is: ");

    for(i=0; i<s; i++)
    {
        printf("%d", a[i]);
    }
}