
/*Declare two arrays, accept the contents of both arrays and concatenate the contents of second 
array to first array using function and print the first array. [Array Concatenation using function]
*/

#include<stdio.h>
void concatination_arr(int*, int*, int, int);
void main()
{
    int first_arr[50], size;
    int second_arr[50], vsize;

    printf("Enter size: ");
    scanf("%d", &size);

    for( int i = 0; i < size; i++ )
    {
        printf("enter element first_arr[%d]: ",i);
        scanf("%d", &first_arr[i]);
    }
    for( int i = 0; i < size; i++ )
    {
        printf("%d", first_arr[i]);
        
    }

    printf("\nenter size for second_arr: ");
    scanf("%d", &vsize);

    for( int j = 0; j < vsize; j++ )
    {
        printf("enter element second_arr[%d]: ",j);
        scanf("%d", &second_arr[j]);
    }
    for( int j = 0; j < vsize; j++ )
    {
        printf("%d", second_arr[j]);

    }

    concatination_arr( first_arr, second_arr, size, vsize );

}

void concatination_arr( int *f, int *s, int s1, int s2 )
{
    int i, j;
    for (  i = s1 , j = 0; i < j; j = s2;  i++; j++ )
    {
        s[i] + f[i];
    }
      printf(" the cocatenation array is s[%d] : %d", i, j);

}