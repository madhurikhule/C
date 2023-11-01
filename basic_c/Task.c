
#include<stdio.h>

void add(int [], int,int);
void main()
{
    int i,no, size, arr[50];

    printf("Enter the size of Array yoy want?<arr 10>: ");
    scanf("%d", &size);

    printf("enter the %d index: ",size);
    scanf("%d", &size);
    
    printf("\nEnter the no to calculate: ");
    scanf("%d",&no);

    for( i=0; i<size; i++ )
    {
        scanf("%d", &arr[i]);
    }
    add(arr, size, no);
}

void add(int a[], int s, int n)
{
    int i, j;
    for( i=0; i<s; i++ )
    {
        for( j=0; j=s-1; j++ )
        {
            if( a[i] + a[j] == n )
            {
            
            }
            printf("the addition of %d%d no: ",a[i],a[j],n);

        }
    }
}