//Acaccept an array and a single number from user and print whether that number is present in 
//the array or not and its number of occurrences.

#include<stdio.h>

void main()
{
    int arr[10], i, size;

    printf("enter how many no want to check?<arr 10>: ");
    scanf("%d", &size);

    printf("enter the %d no",size);

    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==size)
        {
            
            printf("the position of array %d is :: %d ", size);

        }
        else
        {
            printf("these number is not present");
        }
    }
}