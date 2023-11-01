//Accept array from user and reverse the array contents using functions.

#include<stdio.h>
void reverse (int [], int);
void main()
{
    int arr[10], i, size;
    printf("enter the size you want?<arr 10>: ");
    scanf("%d", &size);

    printf("enter the %d no: ",size);

    for(i=0; i<size; i++ )
    {
       scanf("%d", &arr[i]); 
    }
    reverse(arr, size);
}

void reverse(int a[], int s)
{
    int i,j,temp;
    
    for( i=0; j=s-1; i<j, i++, j++ )
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }  
    printf("the swap no is: ");
    for( i=0; i<s; i++ )
    {
    printf("\n%d\n%d", temp, a[i], a[j]);
    } 

}