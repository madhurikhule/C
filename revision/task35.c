/*Declare two arrays, accept the content for first array and copy the
 contents of first array to second array and print the second array. [Array Copy]*/
#include<stdio.h>
void copy_arr(int[], int);
void main()
{
    int arr[10];
    int size;

    printf("Enter size: ");
    scanf("%d", &size);

    for( int i=0; i<size; i++ )
    {
       
        printf("enter the element in arr[%d]",i);
        scanf("%d", &arr[i]);  

    }
    copy_arr(arr, size);
}  
    
void copy_arr(int a[], int s)
{
    int copy_arr[10];

    for(int j=0; j<s; j++ )
    {
        copy_arr[j]= a[j];

        printf("\ncopy_array[%d] : %d", j, copy_arr[j]); 
       
    }
     
}

   
    
    


