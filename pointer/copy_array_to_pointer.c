/*Declare two arrays, accept the content for first array and copy the contents of
 first array to second array using function and print the second array.*/
 
 #include<stdio.h>

 void copy_arr( int*, int );
 void main()
 {
    int arr[30], size;

    printf("Enter size of array: ");
    scanf("%d", &size );

    for( int i = 0; i<size; i++ )
    {
        printf("Enter Elementarr[%d]:  ",i);
        scanf("%d", &*(arr + i));
    }

    copy_arr( arr, size );
    for( int i=0; i<size; i++ )
    {
        printf("\nThe Copy_arr[%d] is: %d ",i, *( arr + i));
    }

 }

 void copy_arr( int *a, int s)
 {
    int copy_arr[30];
    for( int j = 0; j < s; j++ )
    {
        *(copy_arr + j) = *( a + j );
    }
 }