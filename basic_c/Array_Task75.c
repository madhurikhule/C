
//Declare two arrays, accept the content for first array and copy the contents of first array to
//second array using function and print the second array. [Array Copy using function]

#include<stdio.h>

void copy( int[], int);
void main()
{
    int arr[10], i, size;

    printf("Enter the size of array you want?<arr 10>: ");
    scanf("%d", &size );
    printf("enter the %d no you want to copy",size);

    for( i= 0; i<size;  i++ )
    {
        scanf("%d", &arr[i]);
    }
     copy( arr, size);
    
}

void copy(int a[], int s)
{
    int i, copy[10];
    

    for( i=0; i<s; i++ )
    {
        copy[i]=a[i];
    
    }
    printf("the copy array  is: ");
    for( i=0; i<s; i++)
    {
        printf("%d", copy[i]);
    }
}