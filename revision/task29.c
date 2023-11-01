#include<stdio.h>

int mysqu( int[] , int );
void main()
{
    int arr[10], size;

    printf("Enter size: ");
    scanf("%d", &size);

    for ( int i=0; i<size; i++ )
    {
        printf("the elements of arr[%d]",i);
        scanf("%d", &arr[i]);
       
    }
    mysqu(arr, size);
    for (int i=0; i<size; i++ )
        {
            printf("%d\n",arr[i]);
        }

}
int mysqu(int arr[], int size)
{
    int squ;
    for(int i=0; i<size; i++ )
    {
        squ = arr[i]*arr[i];
        arr[i] = squ;

    }
}